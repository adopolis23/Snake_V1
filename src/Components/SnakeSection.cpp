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





