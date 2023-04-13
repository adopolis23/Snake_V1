#include "SnakeSection.h"

Snake::SnakeSection::SnakeSection(int x, int y, int w, int h)
{
	this->setX(x);
	this->setY(y);
	this->setWidth(w);
	this->setHeight(h);

}

void Snake::SnakeSection::Update()
{
	//TODO
}

void Snake::SnakeSection::Render(Snake::Window* window)
{
	this->setX(this->getX() + 1);
	for (int i = this->getX(); i <= this->getX() + this->getWidth(); i++) {
		for (int j = this->getY(); j <= this->getY() + this->getHeight(); j++) {

			window->setPixel(i, j, 0xaf, 0xaf, 0xff);

		}
	}

}
