#pragma once

#include "Window.h"
#include "SnakeSection.h"
#include <vector>

#define LOG(x) std::cout << x << std::endl

namespace Snake {


	class SnakePlayer {

		using Direction = Snake::SnakeSection::Direction;

	public:
		//static class variables
		static const Uint8 Snake_Red_Value = 0xaf;
		static const Uint8 Snake_Green_Value = 0xaf;
		static const Uint8 Snake_Blue_Value = 0xff;

		static const int D_SIZE = 10;

	public:
		//public functions
		SnakePlayer();

		void Render(Window* window);
		void Update();

		void Move(Direction dir);
		void setDirection(Direction dir);

		Direction getDirection();
		Direction getOppositeDirection();
		
		void addSection();

	private:
		std::vector<Snake::SnakeSection> sections; 
		Direction curr_dir;

	};



};