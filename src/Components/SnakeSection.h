#pragma once
#include "GameObject.h"
#include "Window.h"

namespace Snake {

	class SnakeSection : public GameObject {


	public:
		SnakeSection(int x, int y, int w, int h);


		void Update();
		void Render(Snake::Window* window);

	private:



	};


};