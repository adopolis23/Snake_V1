#pragma once

#include "GameObject.h"

namespace Snake {


	class Wall : public GameObject {

	public:
		Wall(int x, int y, int w, int h); 

		void WallRender(Snake::Window* window);

		void Update() {};

	private:
		static const Uint8 Wall_Red_Value = 0xff;
		static const Uint8 Wall_Green_Value = 0x1a;
		static const Uint8 Wall_Blue_Value = 0x1a;

	};



}