#pragma once

#include "Window.h"
#include "SnakeSection.h"
#include "SnakePlayer.h"

#define LOG(x) std::cout << x << std::endl


namespace Snake {

	class Game {

		using Direction = Snake::SnakeSection::Direction;

	public:
		Game();
		~Game();

		void Start();

		void HandleInput();
		void Update();
		void Render();

	private:
		//initialization stuff
		Window* m_Window;
		unsigned int m_Width;
		unsigned int m_Height;

		bool isRunning;

		//game objects
		Snake::SnakePlayer player;
		unsigned int Score;
	};


};

