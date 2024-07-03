_SFX_TEST_WAVEBASE:
	; #00-SILENCE:
	.db	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	; #01-BLOB 1:
	.db	0x00, 0x19, 0x31, 0x47, 0x5A, 0x6A, 0x75, 0x7D, 0x7F, 0x7D, 0x75, 0x6A, 0x5A, 0x47, 0x31, 0x19, 0x80, 0xA0, 0xC0, 0xE0, 0x00, 0x20, 0x40, 0x60, 0x80, 0xA0, 0xC0, 0xE0, 0x00, 0x20, 0x40, 0x60
	; #02-LIGHT1 PARA LASERS:
	.db	0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80, 0x7F, 0x80
	; #03-NOISE1:
	.db	0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x70, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x70, 0x70, 0x70, 0x80, 0x80, 0x80, 0x70, 0x70, 0x70, 0x70, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80
	; #04-NEM3PIANO:
	.db	0x00, 0x68, 0x40, 0x04, 0x00, 0x26, 0x40, 0xF5, 0x10, 0x40, 0x20, 0xD0, 0xF0, 0x00, 0xC0, 0x80, 0xD0, 0x30, 0xC0, 0xA0, 0xB0, 0xC0, 0x80, 0xD0, 0xF0, 0x40, 0x10, 0xC0, 0xD4, 0x00, 0xC0, 0xE0
	; #05-MOTO NEM3:
	.db	0x80, 0x80, 0xE8, 0x18, 0x38, 0x66, 0x78, 0x7F, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x9C, 0x80, 0xDC, 0x80, 0x20, 0xD0, 0x80, 0x7F, 0x80, 0xD0, 0x20, 0x80, 0xDC, 0x80, 0x9C, 0x80, 0x88
	; #06-NEM3SIM BAJO INTERESANTE:
	.db	0x90, 0x88, 0x90, 0x9C, 0xB0, 0xC0, 0xE0, 0x26, 0x70, 0x7C, 0x70, 0x56, 0x40, 0x20, 0x10, 0xFC, 0xE0, 0xFC, 0x10, 0x24, 0x40, 0x54, 0x72, 0x7F, 0x70, 0x26, 0xE0, 0xC0, 0xB0, 0x9C, 0x90, 0x88
	; #07-NOISE2 SALABASS (tipo CLAVI):
	.db	0x00, 0x00, 0x00, 0x80, 0x00, 0x70, 0x70, 0x70, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80
	; #08-BLOB2 (brillo):
	.db	0x00, 0x7F, 0x00, 0x80, 0xA0, 0xC0, 0xD8, 0xF0, 0x08, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70, 0x78, 0x7C, 0x7F, 0x7C, 0x78, 0x70, 0x60, 0x50, 0x40, 0x30, 0x20, 0x08, 0xF0, 0xD8, 0xC0, 0xA0, 0x80
	; #09-WAHBASS:
	.db	0x80, 0xD0, 0x20, 0x7F, 0x40, 0x00, 0xC0, 0x80, 0xD0, 0x20, 0x7F, 0x30, 0xD0, 0x80, 0xD0, 0x30, 0x7F, 0x30, 0xD0, 0x80, 0xB0, 0xE0, 0x18, 0xE0, 0xB0, 0x80, 0x90, 0xA0, 0xB0, 0xA0, 0x90, 0x80
	; #0A/10-MIRROR:
	.db	0x90, 0xD0, 0x20, 0x0C, 0xBC, 0xAA, 0xE6, 0xDC, 0xBC, 0xE3, 0x40, 0x30, 0xE0, 0xD0, 0x10, 0x06, 0xE4, 0x0C, 0x70, 0x50, 0xE0, 0xD0, 0x10, 0x00, 0xD0, 0xF0, 0x40, 0x20, 0xC4, 0xC0, 0xF0, 0x90
	; #0B/11-PARK BASS:
	.db	0x80, 0xAA, 0xC8, 0x00, 0x24, 0x40, 0x5C, 0x70, 0x7F, 0x6A, 0x4A, 0x26, 0x00, 0xD0, 0xA8, 0x8C, 0x80, 0xAA, 0xC8, 0x00, 0x24, 0x40, 0x5C, 0x70, 0x7F, 0x6A, 0x4A, 0x26, 0x00, 0xD0, 0xA8, 0x8C
	; #0C/12-PARK MELODY:
	.db	0x00, 0x19, 0x31, 0x47, 0x5A, 0x6A, 0x75, 0x7D, 0x7F, 0x7D, 0x75, 0x6A, 0x5A, 0x47, 0x31, 0x19, 0x00, 0xF0, 0xE0, 0xD0, 0xC0, 0xB0, 0xA0, 0x90, 0x80, 0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0
	; #0D/13-WAH2:
	.db	0x00, 0x30, 0xF0, 0x30, 0x40, 0x50, 0x60, 0x60, 0x70, 0x79, 0x70, 0x78, 0x40, 0x00, 0x00, 0x0E, 0x70, 0x83, 0x60, 0x50, 0x00, 0x00, 0x00, 0x26, 0x74, 0x82, 0x84, 0x65, 0x64, 0xE4, 0x93, 0x84
	; #0E/14-BASSTECH:
	.db	0x80, 0xA0, 0xC0, 0xCC, 0xC0, 0xBC, 0xC0, 0xC4, 0xE0, 0x24, 0xF0, 0x58, 0x4C, 0x4A, 0x3C, 0x50, 0x7F, 0x60, 0x40, 0x30, 0x40, 0x46, 0x40, 0x46, 0x3C, 0x20, 0xC6, 0xF2, 0xA4, 0xB4, 0xB6, 0xA0
	; #0F/15-LIGHT2:
	.db	0x80, 0x98, 0xB8, 0xE0, 0x20, 0x50, 0x68, 0x7F, 0x68, 0x50, 0x20, 0xF0, 0xD0, 0xB8, 0xA8, 0x90, 0x90, 0xB8, 0x80, 0x00, 0x80, 0x40, 0x80, 0x7F, 0x80, 0x40, 0x80, 0x00, 0x80, 0xC0, 0x90, 0x90
	; #10/16-VENBASS:
	.db	0x00, 0x40, 0x7F, 0x40, 0x01, 0xC0, 0x81, 0xC0, 0x01, 0x40, 0x7F, 0x40, 0x01, 0xC0, 0x01, 0x40, 0x01, 0xE0, 0x01, 0x20, 0x01, 0xF0, 0x01, 0x10, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40
	; #11/17-BLOB3:
	.db	0x80, 0x00, 0x00, 0x00, 0x70, 0x70, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x70, 0x70, 0x70, 0x80, 0x7F, 0x80, 0x80, 0xC0, 0x00, 0x20, 0x34, 0x40, 0x34, 0x20, 0x00, 0xC0, 0x80
	; #12/18-BRASSNK:
	.db	0xA0, 0x90, 0xA0, 0xAC, 0xF0, 0x0A, 0x16, 0x00, 0x90, 0x00, 0x20, 0x40, 0x60, 0x50, 0x38, 0x1C, 0xF2, 0xE2, 0xD6, 0xD0, 0xD0, 0xDA, 0xDC, 0xE0, 0xE2, 0xE2, 0xE2, 0xE0, 0xDC, 0xD8, 0xD0, 0xB0
	; #13/19-TRIANGLE:
	.db	0x00, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70, 0x7F, 0x70, 0x60, 0x50, 0x40, 0x30, 0x20, 0x10, 0xFF, 0xF0, 0xE0, 0xD0, 0xC0, 0xB0, 0xA0, 0x90, 0x80, 0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0
	; #14/20-STRSNAKE:
	.db	0x00, 0x40, 0x7F, 0x40, 0x10, 0x01, 0xEA, 0xD6, 0xC3, 0xB9, 0xAF, 0xA4, 0x9C, 0x95, 0x8F, 0x8A, 0x86, 0x83, 0x81, 0x83, 0x86, 0x8A, 0x8F, 0x95, 0x9C, 0xA4, 0xAF, 0xB9, 0xC3, 0xD6, 0xEA, 0xFF
	; #15/21-XYLOPH:
	.db	0x00, 0x19, 0x31, 0x47, 0x5A, 0x6A, 0x75, 0x7D, 0x7F, 0x7D, 0x75, 0x6A, 0x5A, 0x47, 0x31, 0x19, 0x00, 0xE7, 0xCF, 0xB9, 0xA6, 0x96, 0x8B, 0x83, 0x80, 0x83, 0x8B, 0x96, 0xA6, 0xB9, 0xCF, 0xE7
	; #16/22-PIANO KV2:
	.db	0x30, 0x50, 0x50, 0x30, 0x00, 0x00, 0x10, 0x40, 0x60, 0x70, 0x60, 0x30, 0xF0, 0xE0, 0xE0, 0x00, 0x20, 0x20, 0x10, 0xC0, 0xA0, 0x90, 0xA0, 0xC0, 0x00, 0x00, 0xD0, 0xB0, 0xB0, 0xD0, 0x00, 0x00
	; #17/23-ORGUE:
	.db	0x00, 0x68, 0x48, 0x18, 0x48, 0x68, 0x28, 0x00, 0x48, 0x77, 0x58, 0x08, 0x28, 0x38, 0x00, 0xB8, 0x08, 0x58, 0x00, 0xE8, 0xF8, 0x00, 0xB8, 0x98, 0xC8, 0x08, 0xE8, 0xA8, 0xC8, 0xF8, 0xC8, 0xA8
	; #18/24-PIANOBELL:
	.db	0x00, 0x19, 0x31, 0x47, 0x5A, 0x6A, 0x75, 0x7D, 0x7F, 0x7D, 0x75, 0x6A, 0x5A, 0x47, 0x31, 0x19, 0x00, 0xE0, 0xC0, 0xA0, 0x80, 0xA0, 0xC0, 0xE0, 0x00, 0x20, 0x40, 0x60, 0x7F, 0x60, 0x40, 0x20
	; #19/25-SDINTRO:
	.db	0x00, 0x30, 0x50, 0x60, 0x70, 0x60, 0x50, 0x30, 0x00, 0xD0, 0xB0, 0xA0, 0x90, 0xA0, 0xB0, 0xD0, 0x00, 0x40, 0x60, 0x70, 0x60, 0x40, 0x00, 0xC0, 0xA0, 0x90, 0xA0, 0xC0, 0x00, 0x70, 0x00, 0x90
	; #1A/26-TOM:
	.db	0x01, 0x2A, 0x40, 0x50, 0x5C, 0x68, 0x70, 0x78, 0x7F, 0x78, 0x70, 0x68, 0x5C, 0x50, 0x40, 0x2A, 0xFF, 0xD6, 0xC0, 0xB0, 0xA4, 0x98, 0x90, 0x88, 0x81, 0x88, 0x90, 0x98, 0xA4, 0xB0, 0xC0, 0xD6
	; #1B/27-PIANO3:
	.db	0x00, 0xE0, 0xC0, 0xA0, 0x80, 0xA0, 0xC0, 0xE0, 0x00, 0x20, 0x40, 0x60, 0x7F, 0x60, 0x40, 0x20, 0x00, 0xE0, 0xC0, 0xA0, 0x80, 0xA0, 0xC0, 0xE0, 0x00, 0x20, 0x40, 0x60, 0x7F, 0x60, 0x40, 0x20
	; #1C/28-SAW:
	.db	0x00, 0xF8, 0xF0, 0xE8, 0xE0, 0xD8, 0xD0, 0xC8, 0xC0, 0xB8, 0xB0, 0xA8, 0xA0, 0x98, 0x90, 0x88, 0x80, 0x78, 0x70, 0x68, 0x60, 0x58, 0x50, 0x48, 0x40, 0x38, 0x30, 0x28, 0x20, 0x18, 0x10, 0x08
	; #1D/29-N3BASS:
	.db	0x80, 0xB0, 0xC0, 0x10, 0x1A, 0x2A, 0x2C, 0x1A, 0x00, 0xE0, 0xD0, 0xE0, 0x22, 0x53, 0x70, 0x75, 0x70, 0x31, 0xEA, 0x80, 0x88, 0x8A, 0x8C, 0x8E, 0x00, 0x7F, 0x75, 0x73, 0x62, 0x00, 0xC0, 0x90
	; #1E/30-SQUARE:
	.db	0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87, 0x87
	; #1F/31-DOUBLE:
	.db	0x00, 0x19, 0x31, 0x47, 0x5A, 0x6A, 0x75, 0x7D, 0x7F, 0x7D, 0x75, 0x6A, 0x5A, 0x47, 0x31, 0x19, 0x80, 0x90, 0xA0, 0xB0, 0xC0, 0xD0, 0xE0, 0xF0, 0x00, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70