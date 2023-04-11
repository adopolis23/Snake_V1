#pragma once
#include <iostream>
#include "SDL.h"


namespace Snake {

	class Window {


	public:
		Window(unsigned int width, unsigned int height);


		bool init();

		void clear();
		void update();
		void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);

	private:
		SDL_Window* m_Window;
		SDL_Renderer* m_Renderer;
		SDL_Texture* m_Texture;
		Uint32* m_mainBuffer;

		unsigned int m_Width;
		unsigned int m_Height;
	};

};