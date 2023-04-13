#pragma once

#include "Window.h"
#include "SnakeSection.h"
#include <vector>


namespace Snake {


	class SnakePlayer {

	public:
		//static class variables
		static const Uint8 Snake_Red_Value = 0xaf;
		static const Uint8 Snake_Green_Value = 0xaf;
		static const Uint8 Snake_Blue_Value = 0xff;

	public:
		//public functions
		SnakePlayer();

		void Render(Window* window);
		void Update();
		
		void addSection();

	private:
		std::vector<Snake::SnakeSection> sections; 

	};



};