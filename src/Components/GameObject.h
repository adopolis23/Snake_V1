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
		virtual void Render(Snake::Window* window) = 0;

	private:

		int x;
		int y;

		unsigned int width;
		unsigned int height;

	};

};