#pragma once

#include "Window.h"
#include "SnakeSection.h"

#define LOG(x) std::cout << x << std::endl


namespace Snake {

	class Game {

	public:
		Game();
		~Game();

		void Start();

		void HandleInput();
		void Update();
		void Render();

	private:
		Window* m_Window;
		unsigned int m_Width;
		unsigned int m_Height;

		bool isRunning;

	};


};

