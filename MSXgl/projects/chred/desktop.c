#include "msxgl.h"
#include "desktop.h"

#include "font/font_mgl_sample6.h"

void intro_screen() {
	Print_SetTextFont(g_Font_MGL_Sample6, 1);
	Print_SetColor(COLOR_WHITE, COLOR_BLACK);
	Print_SetPosition(0, 0);
	Print_DrawText("The MSX Character Editor");
}