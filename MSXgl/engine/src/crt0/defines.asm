; ____________________________
; ██▀███▀██▀▀▀▀▀▀▀█▀▀█        │   ▄▄       ▄▄   ▄▄
; ██  ▀  █▄  ▀██▄ ▀ ▄█ ▄▀▀ █  │  ██ ▀ ██▄▀ ██▀ █ ██
; █  █ █  ▀▀  ▄█  █  █ ▀▄█ █▄ │  ▀█▄▀ ██   ▀█▄ ▀▄█▀
; ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀────────┘
;  by Guillaume 'Aoineko' Blanchard under CC-BY-AS license
;──────────────────────────────────────────────────────────────────────────────
; crt0 helper defines
;------------------------------------------------------------------------------
; By Guillaume 'Aoineko' Blanchard for MSX Game Library 
; (ɔ) 2022 under CC-BY-AS license
;------------------------------------------------------------------------------
.module	crt0

;------------------------------------------------------------------------------
; Global symbols
.globl _main
.globl l__INITIALIZER
.globl s__INITIALIZED
.globl s__INITIALIZER
.globl s__HEADER
.globl s__GSFINAL
.globl s__HEAP

;------------------------------------------------------------------------------
; I/O ports
PPI_A			= #0xA8
VDP_S			= #0x99
VDP_A			= #0x99
V9_P06			= #0x66

;------------------------------------------------------------------------------
; Main-ROM routines
ENASLT			= #0x0024
ROMVER			= #0x002B
MSXVER			= #0x002D
RSLREG			= #0x0138

;------------------------------------------------------------------------------
; RAM work area variables
HIMEM			= #0xFC4A
EXPTBL			= #0xFCC1
H_STKE			= #0xFEDA
SLTSL			= #0xFFFF

;------------------------------------------------------------------------------
; ROM types
ROM_PLAIN		= 0 ; Plain ROM (no mapper)
ROM_MAPPER_8K	= 2 ; Mapper 8 KB
ROM_ASCII8		= 2 ; ASCII-8 mapper
ROM_KONAMI		= 3 ; Konami without SCC mapper
ROM_KONAMI_SCC	= 4 ; Konami with SCC mapper
ROM_NEO8		= 5 ; NEO-8 mapper
ROM_MAPPER_16K	= 8 ; Mapper 16 KB
ROM_ASCII16		= 8 ; ASCII-16 mmaper
ROM_NEO16		= 9 ; NEO-16 mapper


;------------------------------------------------------------------------------
; ISR types
ISR_NONE		= 0				; No ISR
ISR_VBLANK		= 1				; V-blank handler (V9938 or V9958)
ISR_VHBLANK		= 2				; V-blank and h-blank handler (V9958)
ISR_V9990		= 3				; V-blank, h-blank and command end handler (V9990)

;------------------------------------------------------------------------------
; Default values
START_ADDR		= 0x4000		; Program start address
ROM_MAPPER		= ROM_PLAIN		; ROM type
ROM_DELAY		= 0				; Install BDOS
ROM_BCALL		= 0				; Add banked call trampoline
ROM_ISR			= ISR_VBLANK	; ISR type
ROM_RAMISR		= 0				; Install ISR in RAM
ISR_SET_S0		= 0				; Reset statut register to S#0 in ISR
APP_SIGN		= 0				; Add application signature
APP_SIGN_NAME	= "GL"			; Application creator/group/company name
APP_SIGN_ID		= 0x0000		; Application number
DOS_PARSEARG	= 0				; Parse MSX-DOS command-line arguments
DOS_ISR			= 0				; Install ISR for MSX-DOS

;------------------------------------------------------------------------------
; Project overwrite values; File generated by the build tool
.include "crt0_config.asm"