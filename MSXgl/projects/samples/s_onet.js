//*****************************************************************************
// PROJECT CONFIG OVERWRITE
//*****************************************************************************

//-- Target MSX machine version (string)
Machine = "1";

//-- Target program format (string)
Target = "ROM_16K_P2";

//-- List of library modules to build (array)
LibModules = [ "network/obsonet", ...LibModules ];

//-- Postpone the ROM startup to let the other ROMs initialize like Disk controller or Network cartridge (boolean)
ROMDelayBoot = true;

//-- Application ID. Can be 2 character string or 16-bits integer (0~65535)
AppID = "ON";
