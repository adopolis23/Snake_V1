#include <iostream>

#include "SDL.h"
#include "Window.h"

int main(int argc, char** argv) {

	Snake::Window wn(720, 480);

	while (true) {
		for (int i = 0; i < 100; i++) {
			for (int j = 0; j < 100; j++) {
				wn.setPixel(i, j, 255, 255, 255);
			}
		}
		wn.clear();
		wn.update();
	}

	return 0;
}

