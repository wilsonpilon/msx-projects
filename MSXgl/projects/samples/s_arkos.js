//*****************************************************************************
// PROJECT CONFIG OVERWRITE
//*****************************************************************************

//-- Target MSX machine version (string)
Machine = "1";

//-- Target program format (string)
Target = "ROM_ASCII8";

//-- Project segments base name (string). ProjName will be used if not defined
ProjSegments = "segment/s_arkos";

//-- List of library modules to build (array)
LibModules = [ "arkos/akg_player", "arkos/akm_player", "arkos/aky_player", ...LibModules ];

//-- Application ID. Can be 2 character string or 16-bits integer (0~65535)
AppID = "AK";
