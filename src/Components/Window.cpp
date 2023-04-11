#include "Window.h"

Snake::Window::Window(unsigned int width, unsigned int height)
	:m_Window(nullptr), m_Renderer(nullptr), m_Width(width), m_Height(height), m_mainBuffer(nullptr)
{
	this->init();
}



bool Snake::Window::init() {
	std::cout << "Init from Window" << std::endl;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		std::cout << "Could not initialize SDL graphics" << std::endl;
		return false;
	}


	m_Window = SDL_CreateWindow("Snake Game",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_Width, m_Height,
		SDL_WINDOW_SHOWN);
	if (!m_Window) {
		SDL_Log("Could not create the window. ");
		SDL_Log("%s", SDL_GetError());
		SDL_Quit();
		return false;
	}

	m_Renderer = SDL_CreateRenderer(m_Window, -1,
		SDL_RENDERER_PRESENTVSYNC);

	if (!m_Renderer) {
		SDL_Log("Could not create the renderer. ");
		SDL_Log("%s", SDL_GetError());
		SDL_Quit();
		return false;
	}



	m_Texture = SDL_CreateTexture(m_Renderer, SDL_PIXELFORMAT_RGBA8888,
		SDL_TEXTUREACCESS_STATIC, m_Width, m_Height);

	if (!m_Texture) {
		SDL_Log("Could not create the texture. ");
		SDL_Log("%s", SDL_GetError());
		SDL_DestroyRenderer(m_Renderer);
		SDL_DestroyWindow(m_Window);
		SDL_Quit();
		return false;
	}



	m_mainBuffer = new Uint32[m_Width * m_Height];

	return true;
}

void Snake::Window::clear() {
	memset(m_mainBuffer, 0, m_Width * m_Height * sizeof(Uint32));
}

void Snake::Window::update() {
	SDL_UpdateTexture(m_Texture, NULL, m_mainBuffer, m_Width * sizeof(Uint32));
	SDL_RenderClear(m_Renderer);
	SDL_RenderCopy(m_Renderer, m_Texture, NULL, NULL);
	SDL_RenderPresent(m_Renderer);
}



void Snake::Window::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {
	
	//input checking
	if (x < 0 || x > m_Width || y > m_Height || y < 0) {
		return; 
	}

	Uint32 new_color = (Uint32)0;

	new_color = new_color + red;
	new_color <<= 8;
	new_color = new_color + green;
	new_color <<= 8;
	new_color = new_color + blue;
	new_color <<= 8;
	new_color = new_color + 0xff;

	std::cout << x << " : " << y << " : " << new_color << std::endl;

	m_mainBuffer[y * m_Width + x] = new_color;

}