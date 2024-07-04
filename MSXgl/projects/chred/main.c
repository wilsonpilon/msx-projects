#include "msxgl.h"
#include "chred.h"

void main() {
	chred();
	while(!Keyboard_IsKeyPressed(KEY_ESC))
		Halt();
	Bios_Exit(0);
}