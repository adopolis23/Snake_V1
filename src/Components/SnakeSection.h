#pragma once
#include "GameObject.h"
#include "Window.h"

namespace Snake {

	class SnakeSection : public GameObject {


	public:
		enum Direction { UP, DOWN, LEFT, RIGHT };

		SnakeSection(int x, int y, int w, int h);


		void Update();

		void Move(Direction dir);

	private:


	};


};