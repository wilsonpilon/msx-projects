//  ██▀▀█▀▀██▀▀▀▀▀▀▀█▀▀█            ▄▄   ▄▄
//  ██  ▀  █▄  ▀██▄ ▀ ▄█  ▄█▄█ ▄▀██ ██▀  ██▄
//  █  █ █  ▀▀  ▄█  █  █  ██ █ ▀▄██ ▀█▄▄ ██ █
//  ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// ─────────────────────────────────────────────────────────────────────────────
//  MSXmath 1.7.0 by Guillaume "Aoineko" Blanchard
//  under CC-BY-SA free license
// 
//  Generated: Sun Mar 17 16:23:50 2024
//  Parameters: Entries=256, Bytes=2 (16-bits), Shift=8 (Q8.8)
// ─────────────────────────────────────────────────────────────────────────────

//  Tangent table. Range [-Pi/2:Pi/2[
const unsigned short g_Tangent256[] = {
	0x7FFF, 0xAE84, 0xD744, 0xE4DA, 0xEBA5, 0xEFB9, 0xF271, 0xF463, 
	0xF5D9, 0xF6FC, 0xF7E4, 0xF8A3, 0xF942, 0xF9C9, 0xFA3D, 0xFAA1, 
	0xFAF9, 0xFB47, 0xFB8C, 0xFBCA, 0xFC02, 0xFC35, 0xFC63, 0xFC8D, 
	0xFCB4, 0xFCD8, 0xFCF9, 0xFD18, 0xFD35, 0xFD4F, 0xFD68, 0xFD80, 
	0xFD96, 0xFDAB, 0xFDBE, 0xFDD1, 0xFDE3, 0xFDF3, 0xFE03, 0xFE13, 
	0xFE21, 0xFE2F, 0xFE3C, 0xFE49, 0xFE55, 0xFE61, 0xFE6C, 0xFE76, 
	0xFE81, 0xFE8B, 0xFE95, 0xFE9E, 0xFEA7, 0xFEB0, 0xFEB8, 0xFEC0, 
	0xFEC8, 0xFED0, 0xFED7, 0xFEDE, 0xFEE6, 0xFEEC, 0xFEF3, 0xFEFA, 
	0xFF00, 0xFF06, 0xFF0C, 0xFF12, 0xFF18, 0xFF1E, 0xFF23, 0xFF29, 
	0xFF2E, 0xFF33, 0xFF38, 0xFF3D, 0xFF42, 0xFF47, 0xFF4C, 0xFF50, 
	0xFF55, 0xFF59, 0xFF5E, 0xFF62, 0xFF67, 0xFF6B, 0xFF6F, 0xFF73, 
	0xFF77, 0xFF7B, 0xFF7F, 0xFF83, 0xFF87, 0xFF8B, 0xFF8F, 0xFF92, 
	0xFF96, 0xFF9A, 0xFF9D, 0xFFA1, 0xFFA4, 0xFFA8, 0xFFAB, 0xFFAF, 
	0xFFB2, 0xFFB6, 0xFFB9, 0xFFBD, 0xFFC0, 0xFFC3, 0xFFC7, 0xFFCA, 
	0xFFCD, 0xFFD0, 0xFFD4, 0xFFD7, 0xFFDA, 0xFFDD, 0xFFE0, 0xFFE4, 
	0xFFE7, 0xFFEA, 0xFFED, 0xFFF0, 0xFFF3, 0xFFF7, 0xFFFA, 0xFFFD, 
	0x0000, 0x0003, 0x0006, 0x0009, 0x000D, 0x0010, 0x0013, 0x0016, 
	0x0019, 0x001C, 0x0020, 0x0023, 0x0026, 0x0029, 0x002C, 0x0030, 
	0x0033, 0x0036, 0x0039, 0x003D, 0x0040, 0x0043, 0x0047, 0x004A, 
	0x004E, 0x0051, 0x0055, 0x0058, 0x005C, 0x005F, 0x0063, 0x0066, 
	0x006A, 0x006E, 0x0071, 0x0075, 0x0079, 0x007D, 0x0081, 0x0085, 
	0x0089, 0x008D, 0x0091, 0x0095, 0x0099, 0x009E, 0x00A2, 0x00A7, 
	0x00AB, 0x00B0, 0x00B4, 0x00B9, 0x00BE, 0x00C3, 0x00C8, 0x00CD, 
	0x00D2, 0x00D7, 0x00DD, 0x00E2, 0x00E8, 0x00EE, 0x00F4, 0x00FA, 
	0x0100, 0x0106, 0x010D, 0x0114, 0x011A, 0x0122, 0x0129, 0x0130, 
	0x0138, 0x0140, 0x0148, 0x0150, 0x0159, 0x0162, 0x016B, 0x0175, 
	0x017F, 0x018A, 0x0194, 0x019F, 0x01AB, 0x01B7, 0x01C4, 0x01D1, 
	0x01DF, 0x01ED, 0x01FD, 0x020D, 0x021D, 0x022F, 0x0242, 0x0255, 
	0x026A, 0x0280, 0x0298, 0x02B1, 0x02CB, 0x02E8, 0x0307, 0x0328, 
	0x034C, 0x0373, 0x039D, 0x03CB, 0x03FE, 0x0436, 0x0474, 0x04B9, 
	0x0507, 0x055F, 0x05C3, 0x0637, 0x06BE, 0x075D, 0x081C, 0x0904, 
	0x0A27, 0x0B9D, 0x0D8F, 0x1047, 0x145B, 0x1B26, 0x28BC, 0x517C, 
};

//  ArcSinus table. Range [-1:1]
const unsigned short g_ArcSinus256[] = {
	0xFE6E, 0xFE8E, 0xFE9B, 0xFEA5, 0xFEAE, 0xFEB6, 0xFEBC, 0xFEC3, 
	0xFEC9, 0xFECE, 0xFED4, 0xFED9, 0xFEDD, 0xFEE2, 0xFEE6, 0xFEEB, 
	0xFEEF, 0xFEF3, 0xFEF7, 0xFEFB, 0xFEFF, 0xFF02, 0xFF06, 0xFF09, 
	0xFF0D, 0xFF10, 0xFF14, 0xFF17, 0xFF1A, 0xFF1D, 0xFF20, 0xFF23, 
	0xFF27, 0xFF2A, 0xFF2C, 0xFF2F, 0xFF32, 0xFF35, 0xFF38, 0xFF3B, 
	0xFF3E, 0xFF40, 0xFF43, 0xFF46, 0xFF48, 0xFF4B, 0xFF4E, 0xFF50, 
	0xFF53, 0xFF55, 0xFF58, 0xFF5A, 0xFF5D, 0xFF5F, 0xFF62, 0xFF64, 
	0xFF67, 0xFF69, 0xFF6B, 0xFF6E, 0xFF70, 0xFF72, 0xFF75, 0xFF77, 
	0xFF79, 0xFF7C, 0xFF7E, 0xFF80, 0xFF83, 0xFF85, 0xFF87, 0xFF89, 
	0xFF8B, 0xFF8E, 0xFF90, 0xFF92, 0xFF94, 0xFF96, 0xFF99, 0xFF9B, 
	0xFF9D, 0xFF9F, 0xFFA1, 0xFFA3, 0xFFA5, 0xFFA8, 0xFFAA, 0xFFAC, 
	0xFFAE, 0xFFB0, 0xFFB2, 0xFFB4, 0xFFB6, 0xFFB8, 0xFFBA, 0xFFBC, 
	0xFFBF, 0xFFC1, 0xFFC3, 0xFFC5, 0xFFC7, 0xFFC9, 0xFFCB, 0xFFCD, 
	0xFFCF, 0xFFD1, 0xFFD3, 0xFFD5, 0xFFD7, 0xFFD9, 0xFFDB, 0xFFDD, 
	0xFFDF, 0xFFE1, 0xFFE3, 0xFFE5, 0xFFE7, 0xFFE9, 0xFFEB, 0xFFED, 
	0xFFEF, 0xFFF1, 0xFFF3, 0xFFF5, 0xFFF7, 0xFFF9, 0xFFFB, 0xFFFD, 
	0xFFFF, 0x0001, 0x0003, 0x0005, 0x0007, 0x0009, 0x000B, 0x000D, 
	0x000F, 0x0011, 0x0013, 0x0015, 0x0017, 0x0019, 0x001B, 0x001D, 
	0x001F, 0x0021, 0x0023, 0x0025, 0x0027, 0x0029, 0x002B, 0x002D, 
	0x002F, 0x0031, 0x0033, 0x0035, 0x0037, 0x0039, 0x003B, 0x003D, 
	0x003F, 0x0041, 0x0044, 0x0046, 0x0048, 0x004A, 0x004C, 0x004E, 
	0x0050, 0x0052, 0x0054, 0x0056, 0x0058, 0x005B, 0x005D, 0x005F, 
	0x0061, 0x0063, 0x0065, 0x0067, 0x006A, 0x006C, 0x006E, 0x0070, 
	0x0072, 0x0075, 0x0077, 0x0079, 0x007B, 0x007D, 0x0080, 0x0082, 
	0x0084, 0x0087, 0x0089, 0x008B, 0x008E, 0x0090, 0x0092, 0x0095, 
	0x0097, 0x0099, 0x009C, 0x009E, 0x00A1, 0x00A3, 0x00A6, 0x00A8, 
	0x00AB, 0x00AD, 0x00B0, 0x00B2, 0x00B5, 0x00B8, 0x00BA, 0x00BD, 
	0x00C0, 0x00C2, 0x00C5, 0x00C8, 0x00CB, 0x00CE, 0x00D1, 0x00D4, 
	0x00D6, 0x00D9, 0x00DD, 0x00E0, 0x00E3, 0x00E6, 0x00E9, 0x00EC, 
	0x00F0, 0x00F3, 0x00F7, 0x00FA, 0x00FE, 0x0101, 0x0105, 0x0109, 
	0x010D, 0x0111, 0x0115, 0x011A, 0x011E, 0x0123, 0x0127, 0x012C, 
	0x0132, 0x0137, 0x013D, 0x0144, 0x014A, 0x0152, 0x015B, 0x0165, 
};

//  ArcCosinus table. Range [-1:1]
const unsigned short g_ArcCosinus256[] = {
	0x0324, 0x0304, 0x02F7, 0x02ED, 0x02E4, 0x02DD, 0x02D6, 0x02CF, 
	0x02C9, 0x02C4, 0x02BF, 0x02BA, 0x02B5, 0x02B0, 0x02AC, 0x02A7, 
	0x02A3, 0x029F, 0x029B, 0x0297, 0x0293, 0x0290, 0x028C, 0x0289, 
	0x0285, 0x0282, 0x027F, 0x027B, 0x0278, 0x0275, 0x0272, 0x026F, 
	0x026C, 0x0269, 0x0266, 0x0263, 0x0260, 0x025D, 0x025A, 0x0257, 
	0x0255, 0x0252, 0x024F, 0x024C, 0x024A, 0x0247, 0x0245, 0x0242, 
	0x023F, 0x023D, 0x023A, 0x0238, 0x0235, 0x0233, 0x0230, 0x022E, 
	0x022C, 0x0229, 0x0227, 0x0224, 0x0222, 0x0220, 0x021D, 0x021B, 
	0x0219, 0x0216, 0x0214, 0x0212, 0x0210, 0x020D, 0x020B, 0x0209, 
	0x0207, 0x0204, 0x0202, 0x0200, 0x01FE, 0x01FC, 0x01FA, 0x01F7, 
	0x01F5, 0x01F3, 0x01F1, 0x01EF, 0x01ED, 0x01EB, 0x01E8, 0x01E6, 
	0x01E4, 0x01E2, 0x01E0, 0x01DE, 0x01DC, 0x01DA, 0x01D8, 0x01D6, 
	0x01D4, 0x01D2, 0x01CF, 0x01CD, 0x01CB, 0x01C9, 0x01C7, 0x01C5, 
	0x01C3, 0x01C1, 0x01BF, 0x01BD, 0x01BB, 0x01B9, 0x01B7, 0x01B5, 
	0x01B3, 0x01B1, 0x01AF, 0x01AD, 0x01AB, 0x01A9, 0x01A7, 0x01A5, 
	0x01A3, 0x01A1, 0x019F, 0x019D, 0x019B, 0x0199, 0x0197, 0x0195, 
	0x0193, 0x0191, 0x018F, 0x018D, 0x018B, 0x0189, 0x0187, 0x0185, 
	0x0183, 0x0181, 0x017F, 0x017D, 0x017B, 0x0179, 0x0177, 0x0175, 
	0x0173, 0x0171, 0x016F, 0x016D, 0x016B, 0x0169, 0x0167, 0x0165, 
	0x0163, 0x0161, 0x015F, 0x015D, 0x015B, 0x0159, 0x0157, 0x0155, 
	0x0153, 0x0151, 0x014F, 0x014D, 0x014A, 0x0148, 0x0146, 0x0144, 
	0x0142, 0x0140, 0x013E, 0x013C, 0x013A, 0x0138, 0x0135, 0x0133, 
	0x0131, 0x012F, 0x012D, 0x012B, 0x0129, 0x0126, 0x0124, 0x0122, 
	0x0120, 0x011E, 0x011B, 0x0119, 0x0117, 0x0115, 0x0112, 0x0110, 
	0x010E, 0x010C, 0x0109, 0x0107, 0x0105, 0x0102, 0x0100, 0x00FD, 
	0x00FB, 0x00F9, 0x00F6, 0x00F4, 0x00F1, 0x00EF, 0x00EC, 0x00EA, 
	0x00E7, 0x00E5, 0x00E2, 0x00E0, 0x00DD, 0x00DA, 0x00D8, 0x00D5, 
	0x00D2, 0x00D0, 0x00CD, 0x00CA, 0x00C7, 0x00C4, 0x00C2, 0x00BF, 
	0x00BC, 0x00B9, 0x00B6, 0x00B3, 0x00AF, 0x00AC, 0x00A9, 0x00A6, 
	0x00A2, 0x009F, 0x009C, 0x0098, 0x0094, 0x0091, 0x008D, 0x0089, 
	0x0085, 0x0081, 0x007D, 0x0079, 0x0074, 0x0070, 0x006B, 0x0066, 
	0x0060, 0x005B, 0x0055, 0x004F, 0x0048, 0x0040, 0x0037, 0x002D, 
};

//  ArcTangent table. Range [0:N]
const unsigned short g_ArcTangent256[] = {
	0x0000, 0x00C9, 0x011B, 0x013F, 0x0153, 0x015F, 0x0168, 0x016E, 
	0x0172, 0x0176, 0x0179, 0x017B, 0x017D, 0x017E, 0x0180, 0x0181, 
	0x0182, 0x0183, 0x0184, 0x0185, 0x0185, 0x0186, 0x0186, 0x0187, 
	0x0187, 0x0188, 0x0188, 0x0189, 0x0189, 0x0189, 0x018A, 0x018A, 
	0x018A, 0x018A, 0x018B, 0x018B, 0x018B, 0x018B, 0x018B, 0x018C, 
	0x018C, 0x018C, 0x018C, 0x018C, 0x018C, 0x018C, 0x018D, 0x018D, 
	0x018D, 0x018D, 0x018D, 0x018D, 0x018D, 0x018D, 0x018D, 0x018D, 
	0x018E, 0x018E, 0x018E, 0x018E, 0x018E, 0x018E, 0x018E, 0x018E, 
	0x018E, 0x018E, 0x018E, 0x018E, 0x018E, 0x018E, 0x018E, 0x018F, 
	0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 
	0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 
	0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 0x018F, 
	0x018F, 0x018F, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 
	0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 
	0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 
	0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 
	0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 
	0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 
	0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 
	0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0190, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
	0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 0x0191, 
};
