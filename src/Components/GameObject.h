#pragma once
#include "Window.h"


namespace Snake {

	class GameObject {

	public:

		void setWidth(unsigned int w);
		unsigned int getWidth();

		void setHeight(unsigned int h);
		unsigned int getHeight();

		void setX(int x);
		int getX();

		void setY(int y);
		int getY();

		virtual void Update() = 0;
		void Render(Snake::Window* window, Uint8 r, Uint8 g, Uint8 b);

		bool collidesWith(GameObject& other);

	private:

		int x;
		int y;

		unsigned int width;
		unsigned int height;

	};

};