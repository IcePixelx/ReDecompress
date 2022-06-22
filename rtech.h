namespace
{
	/*unk_141313180*/
	const unsigned char LUT_0[0x720] =
	{
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF9, 0x04, 0xFD, 0xFC, 0x07, 0x04, 0x05, 0xFF, 0xF4,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF6, 0x04, 0xFD, 0xFC, 0xFB, 0x04, 0x06, 0xFF, 0x0B,
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF8, 0x04, 0xFD, 0xFC, 0x0C, 0x04, 0x05, 0xFF, 0xF7,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF5, 0x04, 0xFD, 0xFC, 0xFA, 0x04, 0x06, 0xFF, 0xF3,
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF9, 0x04, 0xFD, 0xFC, 0x07, 0x04, 0x05, 0xFF, 0xF4,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF6, 0x04, 0xFD, 0xFC, 0xFB, 0x04, 0x06, 0xFF, 0x0E,
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF8, 0x04, 0xFD, 0xFC, 0x0C, 0x04, 0x05, 0xFF, 0x09,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF5, 0x04, 0xFD, 0xFC, 0xFA, 0x04, 0x06, 0xFF, 0xF1,
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF9, 0x04, 0xFD, 0xFC, 0x07, 0x04, 0x05, 0xFF, 0xF4,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF6, 0x04, 0xFD, 0xFC, 0xFB, 0x04, 0x06, 0xFF, 0x0D,
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF8, 0x04, 0xFD, 0xFC, 0x0C, 0x04, 0x05, 0xFF, 0xF7,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF5, 0x04, 0xFD, 0xFC, 0xFA, 0x04, 0x06, 0xFF, 0xF2,
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF9, 0x04, 0xFD, 0xFC, 0x07, 0x04, 0x05, 0xFF, 0xF4,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF6, 0x04, 0xFD, 0xFC, 0xFB, 0x04, 0x06, 0xFF, 0x0F,
		0x04, 0xFE, 0xFC, 0x08, 0x04, 0xEF, 0x11, 0xF8, 0x04, 0xFD, 0xFC, 0x0C, 0x04, 0x05, 0xFF, 0x0A,
		0x04, 0xFE, 0xFC, 0x10, 0x04, 0xEF, 0x11, 0xF5, 0x04, 0xFD, 0xFC, 0xFA, 0x04, 0x06, 0xFF, 0xF0,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x11,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0C,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x09,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0E,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x11,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0B,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0A,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x10,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x11,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0C,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x09,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0F,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x11,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0D,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x07, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x0A,
		0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0x08, 0x04, 0x05, 0x04, 0x06, 0x04, 0x05, 0x04, 0xFF,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x06,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x07,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x06,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x06,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x07,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x06,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x02, 0x04, 0x03, 0x05, 0x02, 0x04, 0x04, 0x06, 0x02, 0x04, 0x03, 0x06, 0x02, 0x05, 0x04, 0x08,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x06,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x07,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x07,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x08,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x06,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x08,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x07,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x08,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x06,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x07,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x07,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x08,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x06,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x08,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x07,
		0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x03, 0x01, 0x02, 0x01, 0x08,
		0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x06, 0x00, 0x08, 0x00, 0x01, 0x00, 0x08, 0x00, 0x0B,
		0x00, 0x08, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x09, 0x00, 0x08, 0x00, 0x03, 0x00, 0x08, 0x00, 0x0E,
		0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x07, 0x00, 0x08, 0x00, 0x02, 0x00, 0x08, 0x00, 0x0D,
		0x00, 0x08, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x0A, 0x00, 0x08, 0x00, 0x05, 0x00, 0x08, 0x00, 0x0F,
		0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06,
		0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06,
		0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06,
		0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06, 0x01, 0x02, 0x01, 0x06,
		0x4A, 0x00, 0x00, 0x00, 0x6A, 0x00, 0x00, 0x00, 0x8A, 0x00, 0x00, 0x00, 0xAA, 0x00, 0x00, 0x00,
		0xCA, 0x00, 0x00, 0x00, 0xEA, 0x00, 0x00, 0x00, 0x0A, 0x01, 0x00, 0x00, 0x2A, 0x01, 0x00, 0x00,
		0x4A, 0x01, 0x00, 0x00, 0x6A, 0x01, 0x00, 0x00, 0x8A, 0x01, 0x00, 0x00, 0xAA, 0x01, 0x00, 0x00,
		0xAA, 0x03, 0x00, 0x00, 0xAA, 0x05, 0x00, 0x00, 0xAA, 0x25, 0x00, 0x00, 0xAA, 0x25, 0x02, 0x00,
		0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x09, 0x09, 0x0D, 0x11, 0x15,
		0x00, 0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x2A, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x05, 0x05,
		0x11, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0xBF,
		0xA8, 0xAA, 0x2A, 0xBE, 0xA8, 0xAA, 0x2A, 0xBE, 0xA8, 0xAA, 0x2A, 0xBE, 0xA8, 0xAA, 0x2A, 0xBE,
		0xD2, 0x85, 0x08, 0x3C, 0xD2, 0x85, 0x08, 0x3C, 0xD2, 0x85, 0x08, 0x3C, 0xD2, 0x85, 0x08, 0x3C,
		0x83, 0xF9, 0x22, 0x3F, 0x83, 0xF9, 0x22, 0x3F, 0x83, 0xF9, 0x22, 0x3F, 0x83, 0xF9, 0x22, 0x3F,
		0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
		0x00, 0x10, 0xC9, 0x3F, 0x00, 0x10, 0xC9, 0x3F, 0x00, 0x10, 0xC9, 0x3F, 0x00, 0x10, 0xC9, 0x3F,
		0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F,
		0x02, 0x61, 0x4D, 0xB9, 0x02, 0x61, 0x4D, 0xB9, 0x02, 0x61, 0x4D, 0xB9, 0x02, 0x61, 0x4D, 0xB9,
		0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
		0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
		0xC2, 0x14, 0xCF, 0x37, 0xC2, 0x14, 0xCF, 0x37, 0xC2, 0x14, 0xCF, 0x37, 0xC2, 0x14, 0xCF, 0x37,
		0x9E, 0x4B, 0x6F, 0xB0, 0x9E, 0x4B, 0x6F, 0xB0, 0x9E, 0x4B, 0x6F, 0xB0, 0x9E, 0x4B, 0x6F, 0xB0,
		0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
		0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0xF1, 0x1D, 0xC1, 0xF6, 0x7F, 0x00, 0x00,
		0x22, 0x0B, 0xB6, 0xBA, 0x22, 0x0B, 0xB6, 0xBA, 0x22, 0x0B, 0xB6, 0xBA, 0x22, 0x0B, 0xB6, 0xBA,
		0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x3F,
		0x02, 0x61, 0x4D, 0xB9, 0x02, 0x61, 0x4D, 0xB9, 0x02, 0x61, 0x4D, 0xB9, 0x02, 0x61, 0x4D, 0xB9,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
		0xC2, 0x14, 0xCF, 0x37, 0xC2, 0x14, 0xCF, 0x37, 0xC2, 0x14, 0xCF, 0x37, 0xC2, 0x14, 0xCF, 0x37,
		0x9E, 0x4B, 0x6F, 0xB0, 0x9E, 0x4B, 0x6F, 0xB0, 0x9E, 0x4B, 0x6F, 0xB0, 0x9E, 0x4B, 0x6F, 0xB0,
		0x22, 0x0B, 0xB6, 0xBA, 0x22, 0x0B, 0xB6, 0xBA, 0x22, 0x0B, 0xB6, 0xBA, 0x22, 0x0B, 0xB6, 0xBA,
		0x00, 0x70, 0x95, 0xB6, 0x00, 0x70, 0x95, 0xB6, 0x00, 0x70, 0x95, 0xB6, 0x00, 0x70, 0x95, 0xB6,
		0xA9, 0xAA, 0x2A, 0x3D, 0xA9, 0xAA, 0x2A, 0x3D, 0xA9, 0xAA, 0x2A, 0x3D, 0xA9, 0xAA, 0x2A, 0x3D,
		0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F, 0x00, 0x00, 0x80, 0x3F,
		0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0xBF,
		0xA8, 0xAA, 0x2A, 0xBE, 0xA8, 0xAA, 0x2A, 0xBE, 0xA8, 0xAA, 0x2A, 0xBE, 0xA8, 0xAA, 0x2A, 0xBE,
		0xD2, 0x85, 0x08, 0x3C, 0xD2, 0x85, 0x08, 0x3C, 0xD2, 0x85, 0x08, 0x3C, 0xD2, 0x85, 0x08, 0x3C,
		0x83, 0xF9, 0x22, 0x3F, 0x83, 0xF9, 0x22, 0x3F, 0x83, 0xF9, 0x22, 0x3F, 0x83, 0xF9, 0x22, 0x3F,
		0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
		0x00, 0x10, 0xC9, 0x3F, 0x00, 0x10, 0xC9, 0x3F, 0x00, 0x10, 0xC9, 0x3F, 0x00, 0x10, 0xC9, 0x3F,
		0x4C, 0x39, 0x56, 0x75, 0x42, 0x52, 0x65, 0x75, 0x70, 0x35, 0x31, 0x77, 0x4C, 0x51, 0x64, 0x61,
	};
}

enum class RPakVersion : std::uint16_t
{
	R2 = 7,
	R5 = 8
};

struct RPakInfoHeader_t
{
	std::uint32_t Magic;
	RPakVersion   Version;
};

struct RPakHeaderR2_t
{
	std::uint32_t m_nMagic;                    // 'RPak'
	RPakVersion   m_nVersion;                  // R2 = '7' R5 = '8'
	std::uint8_t  m_nFlags[0x2];               //
	std::uint8_t  m_nHash0[0x8];               //
	std::uint8_t  m_nHash1[0x8];               //

	std::uint64_t m_nSizeDisk;                 // Compressed size
	std::uint8_t  unk0[0x8];                   //
	std::uint64_t m_nSizeMemory;               // Decompressed size
	std::uint8_t  unk1[0x8];                   //

	std::uint16_t m_nStarpakReferenceSize;     //
	std::uint16_t m_nVirtualSegmentCount;      //
	std::uint16_t m_nPageCount;		           //

	std::uint16_t m_nPatchIndex;               //

	std::uint32_t m_nDescriptorCount;          //
	std::uint32_t m_nAssetEntryCount;          // File entry count
	std::uint32_t m_nGuidDescriptorCount;      //

	std::uint8_t  unk2[0x4];                   //
	std::uint8_t  unk3[0x4];                   //
	std::uint8_t  unk4[0x4];                   //
};

struct RPakHeaderR5_t
{
	std::uint32_t m_nMagic;                    // 'RPak'
	RPakVersion   m_nVersion;                  // R2 = '7' R5 = '8'
	std::uint8_t  m_nFlags[0x2];               //
	std::uint8_t  m_nHash0[0x8];               //
	std::uint8_t  m_nHash1[0x8];               //
	std::uint64_t m_nSizeDisk;                 // Compressed size
	std::uint64_t m_nEmbeddedStarpakOffset;    //
	std::uint8_t  unk0[0x8];                   //
	std::uint64_t m_nSizeMemory;               // Decompressed size
	std::uint64_t m_nEmbeddedStarpakSize;      //
	std::uint8_t  unk1[0x8];                   //

	std::uint16_t m_nStarpakReferenceSize;     //
	std::uint16_t m_nStarpakOptReferenceSize;  //
	std::uint16_t m_nVirtualSegmentCount;      // * 0x10
	std::uint16_t m_nVirtualSegmentBlockCount; // * 0xC

	std::uint32_t m_nPatchIndex;               //

	std::uint32_t m_nDescriptorCount;          //
	std::uint32_t m_nAssetEntryCount;          // File entry count
	std::uint32_t m_nGuidDescriptorCount;      //
	std::uint32_t m_nRelationsCounts;          //

	std::uint8_t  unk2[0x1C];                  //
};

struct RPakPatchHeader_t
{
	std::uint64_t m_nSizeDisk;
	std::uint64_t m_nSizeMemory;
};


class RTech
{
public:
	std::uint8_t __fastcall Decompress(std::int64_t* params, std::uint64_t file_size, std::uint64_t buffer_size);
	std::uint32_t __fastcall DecompressedSize(std::int64_t param_buf, std::uint8_t* file_buf, std::int64_t file_size, std::int64_t off_no_header, std::int64_t header_size);
};

///////////////////////////////////////////////////////////////////////////////
extern RTech* g_pRtech;
