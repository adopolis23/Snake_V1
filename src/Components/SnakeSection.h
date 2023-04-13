#pragma once
#include "GameObject.h"
#include "Window.h"

namespace Snake {

	class SnakeSection : public GameObject {


	public:
		enum Direction { UP, DOWN, LEFT, RIGHT };

		SnakeSection(int x, int y, int w, int h);


		void Update();
		void Render(Snake::Window* window, Uint8 r, Uint8 g, Uint8 b);

		void Move(Direction dir);

	private:



	};


};