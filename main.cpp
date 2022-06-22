#include "stdafx.h"
#include "rtech.h"
#include "windows.h"

bool file_exist(const std::string& path)
{
	std::ifstream f(path);
	return f.good();
}

std::pair<std::string, bool> open_file_dialog()
{
	OPENFILENAME open_file_name;
	char file_name[MAX_PATH] = "";
	memset(&open_file_name, 0, sizeof(open_file_name));

	open_file_name.lStructSize = sizeof(OPENFILENAME);
	open_file_name.hwndOwner = NULL;
	open_file_name.lpstrFilter = "Respawn Pak (*.rpak)\0*.RPAK\0";
	open_file_name.lpstrFile = file_name;
	open_file_name.nMaxFile = MAX_PATH;
	open_file_name.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
	open_file_name.lpstrDefExt = "";

	std::string file_str = std::string();

	if (GetOpenFileNameA(&open_file_name))
		file_str = file_name;

	if (file_str.empty())
		return std::make_pair(file_str, false);

	return std::make_pair(file_str, true);
}

int main(int argc, char* argv[])
{
	std::string pak_path = std::string();
	if (argc >= 2)
	{
		pak_path = argv[1];
	}
	else
	{
		auto file_dialog = open_file_dialog();
		if (!file_dialog.second)
		{
			std::cout << "ERROR: pak file did not get select by file dialog." << std::endl;
			std::system("pause");
			return -1;
		}

		pak_path = file_dialog.first;
	}

	if (!file_exist(pak_path))
	{
		std::cout << "ERROR: pak file " << pak_path <<  " does not exist." << std::endl;
		std::system("pause");
		return -1;
	}

	std::vector<std::uint8_t> u_pak = { };
	std::ifstream in_pak(pak_path, std::fstream::binary);

	in_pak.seekg(0, std::fstream::end);
	u_pak.resize(in_pak.tellg());
	in_pak.seekg(0, std::fstream::beg);
	in_pak.read((char*)u_pak.data(), u_pak.size());

	RPakHeader_t* rheader = (RPakHeader_t*)u_pak.data();

	if (rheader->m_nMagic != 'kaPR')
	{
		std::cout << "ERROR: pak file " << pak_path << " has invalid magic." << std::endl;
		std::system("pause");
		return -1;
	}

	if ((rheader->m_nFlags[1] & 1) != 1)
	{
		std::cout << "ERROR: pak file " << pak_path << " is already decompressed." << std::endl;
		std::system("pause");
		return -1;
	}

	if (rheader->m_nSizeDisk != u_pak.size())
	{
		std::cout << "ERROR: pak file " << pak_path << " header size does not equal parsed size.\nHeader: " << rheader->m_nSizeDisk << "\nParsed: " << u_pak.size() << std::endl;
		std::system("pause");
		return -1;
	}

	std::int64_t params[18];
	std::uint32_t decompressed_size = g_pRtech->DecompressedSize((std::int64_t)(params), u_pak.data(), u_pak.size(), 0, PAK_HEADER_SIZE);
	if (decompressed_size == rheader->m_nSizeDisk)
	{
		std::cout << "Error: Calculating decompressed size did not match header.\nCalculated: " << decompressed_size << "\nHeader: " << rheader->m_nSizeMemory << std::endl;
		std::system("pause");
		return -1;
	}

	std::vector<std::uint8_t> pak_buf(rheader->m_nSizeMemory, 0);
	params[1] = std::int64_t(pak_buf.data());
	params[3] = -1i64;

	bool decomp_result = g_pRtech->Decompress(params, u_pak.size(), pak_buf.size());
	if (!decomp_result)
	{
		std::cout << "Error: Decompression failed for " << pak_path << "." << std::endl;
		std::system("pause");
		return -1;
	}

	rheader->m_nFlags[1] = 0x0; // Set header compressed to false;
	rheader->m_nSizeDisk = rheader->m_nSizeMemory; // Since we decompressed set disk size to actual mem size.

	std::string out_pak = pak_path;
	out_pak.insert(out_pak.find(".rpak"), "_decompressed");

	std::ofstream out_block(out_pak, std::fstream::binary);

	// I don't know if r2 does the same thing for patch headers.
	if (rheader->m_nPatchIndex > 0)
	{
		for (int i = 1, patch_offset = 0x88; i <= rheader->m_nPatchIndex; i++, patch_offset += sizeof(RpakPatchCompressPair))
		{
			RpakPatchCompressPair* patch_header = (RpakPatchCompressPair*)((std::uintptr_t)pak_buf.data() + patch_offset);
			patch_header->m_nSizeDisk = patch_header->m_nSizeMemory;
		}
	}

	memcpy_s(pak_buf.data(), params[5], ((std::uint8_t*)rheader), PAK_HEADER_SIZE); // Overwrite first 0x80 bytes which are NULL with the header data.

	out_block.write((char*)pak_buf.data(), params[5]);

	out_block.close();

	return 0;
}