// ____________________________ 
// ██▀▀█▀▀██▀▀▀▀▀▀▀█▀▀█        │   ▄▄▄           ▄▄ 
// ██  ▀  █▄  ▀██▄ ▀ ▄█ ▄▀▀ █  │  ▀█▄  █ ██  ██▀ ██▀ ▄███ ▄█▄█
// █  █ █  ▀▀  ▄█  █  █ ▀▄█ █▄ │  ▄▄█▀  ▀██ ▄██  ▀█▄ ▀█▄▄ ██ █
// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀────────┘        ▀▀
//  by Guillaume 'Aoineko' Blanchard under CC BY-SA license
//─────────────────────────────────────────────────────────────────────────────
#pragma once

//=============================================================================
// INCLUDES
//=============================================================================

#include "core.h"
// #include "bios.h"
#include "system_port.h"
#include "asm.h"
#include "bios_var.h"

//=============================================================================
// DEFINES
//=============================================================================

//-----------------------------------------------------------------------------
// Slot ID
// ExxxSSPP
// │   ││└┴─ Primary slot number (00-11)
// │   └┴─── Secondary slot number (00-11)
// └──────── Expanded slot (0 = no, 1 = yes)

// Primary slots
#define SLOT_0			(0x00)
#define SLOT_1			(0x01)
#define SLOT_2			(0x02)
#define SLOT_3			(0x03)

#define SLOT_EXP		(1 << 7)
// Expanded slots		Primary   Secondary       Expand
#define SLOT_0_0		(SLOT_0 | (SLOT_0 << 2) | SLOT_EXP)
#define SLOT_0_1		(SLOT_0 | (SLOT_1 << 2) | SLOT_EXP)
#define SLOT_0_2		(SLOT_0 | (SLOT_2 << 2) | SLOT_EXP)
#define SLOT_0_3		(SLOT_0 | (SLOT_3 << 2) | SLOT_EXP)
#define SLOT_1_0		(SLOT_1 | (SLOT_0 << 2) | SLOT_EXP)
#define SLOT_1_1		(SLOT_1 | (SLOT_1 << 2) | SLOT_EXP)
#define SLOT_1_2		(SLOT_1 | (SLOT_2 << 2) | SLOT_EXP)
#define SLOT_1_3		(SLOT_1 | (SLOT_3 << 2) | SLOT_EXP)
#define SLOT_2_0		(SLOT_2 | (SLOT_0 << 2) | SLOT_EXP)
#define SLOT_2_1		(SLOT_2 | (SLOT_1 << 2) | SLOT_EXP)
#define SLOT_2_2		(SLOT_2 | (SLOT_2 << 2) | SLOT_EXP)
#define SLOT_2_3		(SLOT_2 | (SLOT_3 << 2) | SLOT_EXP)
#define SLOT_3_0		(SLOT_3 | (SLOT_0 << 2) | SLOT_EXP)
#define SLOT_3_1		(SLOT_3 | (SLOT_1 << 2) | SLOT_EXP)
#define SLOT_3_2		(SLOT_3 | (SLOT_2 << 2) | SLOT_EXP)
#define SLOT_3_3		(SLOT_3 | (SLOT_3 << 2) | SLOT_EXP)

#define SLOT(p)			(0x03 & (p))
#define SLOTEX(p, s)	((0x03 & (p)) | ((0x03 & (s)) << 2) | SLOT_EXP)

#define IS_SLOT_EXP(s)	((s) & SLOT_EXP)
#define SLOT_PRIM(s)	((s) & 0x03)
#define SLOT_SEC(s)		(((s) >> 2 ) & 0x03)

#define SLOT_NOTFOUND 	0xFF
#define SLOT_INVALID 	0xFF

typedef bool (*CheckSlotCallback)(u8);

//-----------------------------------------------------------------------------
extern u16 g_FirstAddr;
extern u16 g_HeaderAddr;
extern u16 g_LastAddr;

//-----------------------------------------------------------------------------
// CRT0 defines

#if ((TARGET_TYPE == TYPE_ROM) && GET_TARGET_ISR(TARGET))
	extern u8 g_VersionROM;
	extern u8 g_VersionMSX;
#endif

//-----------------------------------------------------------------------------
// Macro to change a given bank's segment
#if ((ROM_MAPPER == ROM_NEO8) || (ROM_MAPPER == ROM_NEO16))

	// Segment value backup
	extern u16 g_Bank0Segment;
	extern u16 g_Bank1Segment;
	extern u16 g_Bank2Segment;
	#if (ROM_MAPPER == ROM_NEO8)
	extern u16 g_Bank3Segment;
	extern u16 g_Bank4Segment;
	extern u16 g_Bank5Segment;
	#endif

	// Macro: SET_BANK_SEGMENT
	// Set the current segment of the given bank
	//
	// Parameters:
	//   b - Bank number to set (0-5, depending of the mapper). Must be an inline number (not a variable)
	//   s - Segment to select in this bank
	#define SET_BANK_SEGMENT(b, s)		do { (*(u16*)(ADDR_BANK_##b) = (s)); (g_Bank##b##Segment = (s)); } while (0)
	#define SET_BANK_SEGMENT_LOW(b, s)	do { (*(u8*)(ADDR_BANK_##b + 0) = (s)); (*(u8*)(&g_Bank##b##Segment + 0) = (s)); } while (0)
	#define SET_BANK_SEGMENT_HIGH(b, s)	do { (*(u8*)(ADDR_BANK_##b + 1) = (s)); (*(u8*)(&g_Bank##b##Segment + 1) = (s)); } while (0)

	// Macro: GET_BANK_SEGMENT
	// Get the current segment of the given bank
	//
	// Parameters:
	//   b - Bank number to get (0-5, depending of the mapper). Must be an inline number (not a variable)
	//
	// Return:
	//   Segment selected in this bank
	#define GET_BANK_SEGMENT(b)			(g_Bank##b##Segment)
	#define GET_BANK_SEGMENT_LOW(b)		(u8)(g_Bank##b##Segment)
	#define GET_BANK_SEGMENT_HIGH(b)	(u8)(g_Bank##b##Segment >> 8)

#elif (ROM_MAPPER > ROM_PLAIN)

	// Segment value backup
	extern u8 g_Bank0Segment;
	extern u8 g_Bank1Segment;
	#if (ROM_MAPPER < ROM_MAPPER_16K)
	extern u8 g_Bank2Segment;
	extern u8 g_Bank3Segment;
	#endif

	// Set the current segment of the given bank
	#define SET_BANK_SEGMENT(b, s)		do { (*(u8*)(ADDR_BANK_##b) = (s)); (g_Bank##b##Segment = (s)); } while (0)
	#define SET_BANK_SEGMENT_LOW(b, s)	SET_BANK_SEGMENT(b, s)
	#define SET_BANK_SEGMENT_HIGH(b, s)

	// Get the current segment of the given bank
	#define GET_BANK_SEGMENT(b)			(g_Bank##b##Segment)
	#define GET_BANK_SEGMENT_LOW(b)		GET_BANK_SEGMENT(b)
	#define GET_BANK_SEGMENT_HIGH(b)	(0)

#elif (TARGET == TARGET_DOS2_MAPPER)

	// Set the current segment of the given bank
	#define SET_BANK_SEGMENT(b, s)		DOSMapper_SetPage(b + 1, s)
	#define SET_BANK_SEGMENT_LOW(b, s)	SET_BANK_SEGMENT(b, s)
	#define SET_BANK_SEGMENT_HIGH(b, s)

	// Get the current segment of the given bank
	#define GET_BANK_SEGMENT(b)			DOSMapper_GetPage(b + 1)
	#define GET_BANK_SEGMENT_LOW(b)		GET_BANK_SEGMENT(b)
	#define GET_BANK_SEGMENT_HIGH(b)	(0)

#else

	// Set the current segment of the given bank
	#define SET_BANK_SEGMENT(b, s)
	#define SET_BANK_SEGMENT_LOW(b, s)
	#define SET_BANK_SEGMENT_HIGH(b, s)

	// Get the current segment of the given bank
	#define GET_BANK_SEGMENT(b)
	#define GET_BANK_SEGMENT_LOW(b)
	#define GET_BANK_SEGMENT_HIGH(b)

#endif


//=============================================================================
// FUNCTIONS
//=============================================================================

//-----------------------------------------------------------------------------
// Group: Helper
// Helper inline functions

// Function: EnableInterrupt
// Enable interruption
inline void EnableInterrupt() { __asm__("ei"); }

// Function: DisableInterrupt
// Disable interruption
inline void DisableInterrupt() { __asm__("di"); }

// Function: Halt
// Pause the CPU until a new interruption occured
inline void Halt() { __asm__("halt"); }

// Function: Call
// Direct call a routine at a given address (generate ASM code: "call XXXX")
// No extra cost due to calling a C function.
//
// Parameters:
//   addr - Address to call
//
// Return:
//   Value stored in register A
inline void Call(u16 addr) { ((void(*)(void))addr)(); }

// Function: CallA
// Direct call a routine at a given address with a 8-bits parameter in register A (generate ASM code: "call XXXX")
// No extra cost due to calling a C function.
//
// Parameters:
//   addr - Address to call
//   a    - Function parameter to put in register A
inline void CallA(u16 addr, u8 a) { ((void(*)(u8))addr)(a); }

typedef void (*calll_t)(u8) __FASTCALL;
// Function: CallL
// Direct call a routine at a given address with a 8-bits parameter in register L (generate ASM code: "call XXXX")
// No extra cost due to calling a C function.
//
// Parameters:
//   addr - Address to call
//   l    - Function parameter to put in register L
inline void CallL(u16 addr, u8 l) { ((calll_t)addr)(l); }

// Function: CallHL
// Direct call a routine at a given address with a 16-bits parameter in register HL (generate ASM code: "call XXXX")
// No extra cost due to calling a C function.
//
// Parameters:
//   addr - Address to call
//   val  - Function parameter to put in register HL
inline void CallHL(u16 addr, u16 hl) { ((void(*)(u16))addr)(hl); }

// Function: CallDriver
// Direct call a routine at a given address with a 8-bits parameter in register A (generate ASM code: "call XXXX")
// No extra cost due to calling a C function.
//
// Parameters:
//   addr - Address of the driver
//   a    - Value to transfer to driver's main function
inline u8 CallDriver(u16 addr, u8 a) { return ((u8(*)(u8))addr)(a); }

//-----------------------------------------------------------------------------
// Group: Slot
// Slot handling functions

// Function: Sys_GetPageSlot
// Get the slot ID of a given page
//
// Parameters:
//   page - The page to ckeck
u8 Sys_GetPageSlot(u8 page);

// Function: Sys_SetPageSlot
// Select a slot in a given page
//
// Parameters:
//   page - The page to change
//   slotId - The slot ID to select
void Sys_SetPageSlot(u8 page, u8 slotId);

// Function: Sys_IsSlotExpanded
// Check if slot is expanded
//
// Parameters:
//   slot - The slot to check
inline bool Sys_IsSlotExpanded(u8 slot) { return g_EXPTBL[slot] & SLOT_EXP; }

// Function: Sys_SetPage0Slot
// Select a given slot in page 0
//
// Parameters:
//   slotId - The slot to select
void Sys_SetPage0Slot(u8 slotId);

// Function: Sys_SlotIsExpended
// Check expended flag from slot ID
//
// Parameters:
//   slotId - The slot ID
inline bool Sys_SlotIsExpended(u8 slotId) { return IS_SLOT_EXP(slotId); }

// Function: Sys_SlotGetPrimary
// Get primary slot from slot ID
//
// Parameters:
//   slotId - The slot ID
inline u8 Sys_SlotGetPrimary(u8 slotId) { return SLOT_PRIM(slotId); }

// Function: Sys_SlotGetSecondary
// Get secondary slot from slot ID
//
// Parameters:
//   slotId - The slot ID
inline u8 Sys_SlotGetSecondary(u8 slotId) { return SLOT_SEC(slotId); }

// Function: Sys_CheckSlot
// Check all slots with a given callback function
u8 Sys_CheckSlot(CheckSlotCallback cb);

//-----------------------------------------------------------------------------
// Group: Address
// Binary address functions

// Function: Sys_GetFirstAddr
// Get first address of program binary
inline u16 Sys_GetFirstAddr() { return (u16)&g_FirstAddr; }

// Function: Sys_GetHeaderAddr
// Get address of program header (if any)
inline u16 Sys_GetHeaderAddr() { return (u16)&g_HeaderAddr; }

// Function: Sys_GetLastAddr
// Get last address of program binary
inline u16 Sys_GetLastAddr()  { return (u16)&g_LastAddr; }

//-----------------------------------------------------------------------------
// Group: Misc
// Miscellaneous helper functions

// Function: Sys_PlayClickSound
// Play the click sound
inline void Sys_PlayClickSound() { g_PortAccessKeyboard |= 0x80; }

// Function: Sys_StopClickSound
// Stop the click sound
inline void Sys_StopClickSound() { g_PortAccessKeyboard &= 0x7F; }