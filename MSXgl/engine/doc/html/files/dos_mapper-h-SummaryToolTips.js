﻿NDSummary.OnToolTipsLoaded("File:dos_mapper.h",{94:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype94\" class=\"NDPrototype\"><div class=\"PSection PPlainSection\"><span class=\"SHKeyword\">bool</span> DOSMapper_Init()</div></div><div class=\"TTSummary\">Initializes DOS extended BIOS</div></div>",186:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype186\" class=\"NDPrototype\"><div class=\"PSection PPlainSection\"><span class=\"SHKeyword\">inline</span> DOS_VarTable* DOSMapper_GetVarTable()</div></div><div class=\"TTSummary\">Gets Memory Mappers variable table</div></div>",788:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype788\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">bool</span> DOSMapper_Alloc(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">type,</td></tr><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">slot,</td></tr><tr><td class=\"PType first\">DOS_Segment*&nbsp;</td><td class=\"PName last\">seg</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Allocates a segment.&nbsp; Implementation of extenpended BIOS\'s ALL_SEG routine.</div></div>",789:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype789\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">bool</span> DOSMapper_Free(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">seg,</td></tr><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">slot</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Frees a segment.&nbsp; Implementation of extenpended BIOS\'s FRE_SEG routine.</div></div>",790:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype790\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">inline bool</span> DOSMapper_FreeStruct(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">DOS_Segment*&nbsp;</td><td class=\"PName last\">seg</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Frees a segment through a structure.</div></div>",791:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype791\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\">u8 DOSMapper_ReadByte(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">seg,</td></tr><tr><td class=\"PType first\">u16&nbsp;</td><td class=\"PName last\">addr</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Reads byte from given address.&nbsp; Implementation of extenpended BIOS\'s RD_SEG routine.&nbsp; /!\\ Warning: The mapper RAM slot must be selected in page-2 when this routine is called.</div></div>",792:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype792\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">void</span> DOSMapper_WriteByte(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">seg,</td></tr><tr><td class=\"PType first\">u16&nbsp;</td><td class=\"PName last\">addr,</td></tr><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">val</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Writes byte to given address.&nbsp; Implementation of extenpended BIOS\'s WR_SEG routine.&nbsp; /!\\ Warning: The mapper RAM slot must be selected in page-2 when this routine is called.</div></div>",793:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype793\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">void</span> DOSMapper_SetPage(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">page,</td></tr><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">seg</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Selects a segment on the corresponding memory page at the specified address.&nbsp; Implementation of extenpended BIOS\'s PUT_PH routine.</div></div>",794:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype794\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">void</span> DOSMapper_SetPage0(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">seg</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Selects a segment on page 0 (0000h~3FFFh).&nbsp; Implementation of extenpended BIOS\'s PUT_P0 routine.</div></div>",795:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype795\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">void</span> DOSMapper_SetPage1(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">seg</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Selects a segment on page 1 (4000h~7FFFh).&nbsp; Implementation of extenpended BIOS\'s PUT_P1 routine.</div></div>",796:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype796\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\"><span class=\"SHKeyword\">void</span> DOSMapper_SetPage2(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">seg</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Selects a segment on page 2 (8000h~BFFFh).&nbsp; Implementation of extenpended BIOS\'s PUT_P2 routine.</div></div>",797:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype797\" class=\"NDPrototype WideForm\"><div class=\"PSection PParameterSection CStyle\"><table><tr><td class=\"PBeforeParameters\">u8 DOSMapper_GetPage(</td><td class=\"PParametersParentCell\"><table class=\"PParameters\"><tr><td class=\"PType first\">u8&nbsp;</td><td class=\"PName last\">page</td></tr></table></td><td class=\"PAfterParameters\">)</td></tr></table></div></div><div class=\"TTSummary\">Gets the selected segment number on the corresponding memory page at the specified address.&nbsp; Implementation of extenpended BIOS\'s GET_PH routine.</div></div>",805:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype805\" class=\"NDPrototype\"><div class=\"PSection PPlainSection\">u8 DOSMapper_GetPage0()</div></div><div class=\"TTSummary\">Gets the segment number on page 0 (0000h~3FFFh).&nbsp; Implementation of extenpended BIOS\'s GET_P0 routine.</div></div>",806:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype806\" class=\"NDPrototype\"><div class=\"PSection PPlainSection\">u8 DOSMapper_GetPage1()</div></div><div class=\"TTSummary\">Gets the segment number on page 1 (4000h~7FFFh).&nbsp; Implementation of extenpended BIOS\'s GET_P1 routine.</div></div>",809:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype809\" class=\"NDPrototype\"><div class=\"PSection PPlainSection\">u8 DOSMapper_GetPage2()</div></div><div class=\"TTSummary\">Gets the segment number on page 2 (8000h~BFFFh).&nbsp; Implementation of extenpended BIOS\'s GET_P2 routine.</div></div>",810:"<div class=\"NDToolTip TFunction LC\"><div id=\"NDPrototype810\" class=\"NDPrototype\"><div class=\"PSection PPlainSection\">u8 DOSMapper_GetPage3()</div></div><div class=\"TTSummary\">Gets the segment number on page 3 (C000h~FFFFh).&nbsp; Implementation of extenpended BIOS\'s GET_P3 routine.</div></div>"});