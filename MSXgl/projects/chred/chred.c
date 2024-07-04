#include "msxgl.h"
#include "chred.h"
#include "desktop.h"



void chred() {
	init();
	intro_screen();

}

void init() {
	VDP_SetMode(VDP_MODE_SCREEN0);
	VDP_EnableVBlank(TRUE);
	VDP_ClearVRAM();
}