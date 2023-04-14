#pragma once

#include "GameObject.h"
#include <cstdlib>

namespace Snake {



	class Food : public GameObject {

	public:

		static const Uint8 Food_Red_Value = 0xff;
		static const Uint8 Food_Green_Value = 0x10;
		static const Uint8 Food_Blue_Value = 0x10;


		Food();

		void setRandomPosition(int w, int h);

		void Update() override;
		void Render(Snake::Window* window);

	private:

	};





};