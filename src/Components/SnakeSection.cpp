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



void Snake::SnakeSection::Move(Direction dir) {
	switch (dir) {
	case Direction::UP:
		this->setY(this->getY() - this->getHeight());
		break;
	case Direction::DOWN:
		this->setY(this->getY() + this->getHeight());
		break;
	case Direction::LEFT:
		this->setX(this->getX() - this->getWidth());
		break;
	case Direction::RIGHT:
		this->setX(this->getX() + this->getWidth());
		break;
	};
}




void Snake::SnakeSection::Render(Snake::Window* window, Uint8 r, Uint8 g, Uint8 b)
{
	this->setX(this->getX() + 1);
	for (int i = this->getX(); i <= this->getX() + this->getWidth(); i++) {
		for (int j = this->getY(); j <= this->getY() + this->getHeight(); j++) {

			window->setPixel(i, j, r, g, b);

		}
	}

}
