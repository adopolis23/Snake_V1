#pragma once

#include "GameObject.h"
#include <cstdlib>

namespace Snake {



	class Food : public GameObject {

	public:

		Food();

		void randomPosition(int w, int h);

		void Update() override;
		virtual void Render(Snake::Window* window, Uint8 r, Uint8 g, Uint8 b) override;

	private:

	};





};