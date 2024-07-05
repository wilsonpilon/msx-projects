// ____________________________
// ██▀▀█▀▀██▀▀▀▀▀▀▀█▀▀█        │  ▄▄▄▄ ▄▄ ▄  ▄▄ 
// ██  ▀  █▄  ▀██▄ ▀ ▄█ ▄▀▀ █  │   ▄█▀ ▀█▄▀ █ ██
// █  █ █  ▀▀  ▄█  █  █ ▀▄█ █▄ │  ██▄▄ ██ █ ▀▄█▀
// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀────────┘
//  by Guillaume 'Aoineko' Blanchard under CC BY-SA license
//─────────────────────────────────────────────────────────────────────────────
// ZX0 decoder by Einar Saukas & Urusergi
//  "Standard" version (68 bytes only)
//  https://github.com/einar-saukas/ZX0/blob/main/z80/dzx0_standard.asm
//─────────────────────────────────────────────────────────────────────────────
#pragma once

#include "core.h"

//-----------------------------------------------------------------------------
// OPTIONS VALIDATION
//-----------------------------------------------------------------------------

// ZX0_MODE
#ifndef ZX0_MODE
	#warning ZX0_MODE is not defined in "msxgl_config.h"! Default value will be used: ZX0_MODE_STANDARD
	#define ZX0_MODE					ZX0_MODE_STANDARD
#endif

//-----------------------------------------------------------------------------
// FUNCTIONS
//-----------------------------------------------------------------------------

// Function: ZX0_UnpackToRAM
// Unpack ZX0 compressed data to a RAM buffer
//
// Paramaters:
//   source	- Address of the source data.
//   dest	- Address of unpack destination in RAM.
void ZX0_UnpackToRAM(const void* source, void* dest);