//*****************************************************************************
// PROJECT CONFIG OVERWRITE
//*****************************************************************************

//-- Target MSX machine version (string)
Machine = "1";

//-- List of library modules to build (array)
LibModules = [ "wyz/wyz_player2", "psg", "system", "bios", "vdp", "print", "input", "memory" ];

//-- Additional sources to be compiled and linked with the project (array)
AddSources = [ "content/wyz/Nayade.asm", "content/wyz/RA_PSG.asm", "content/wyz/jinj_med.asm", "content/wyz/gothic.asm", "content/wyz/shampoo.asm", "content/wyz/quezesto.asm" ];

//-- Emulator extra parameters to be add to command-line (string). Emulator sotfware specific
EmulExtraParam = "-exta slotexpander -ext MegaFlashROM_SCC+_SD";

//-- Application ID. Can be 2 character string or 16-bits integer (0~65535)
AppID = "W2";
