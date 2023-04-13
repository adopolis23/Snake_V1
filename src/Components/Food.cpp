#include "Food.h"

#define LOG(x) std::cout << x << std::endl

Snake::Food::Food()
{
	this->setWidth(10);
	this->setHeight(10);

	srand((unsigned)time(NULL));
}


void Snake::Food::randomPosition(int w, int h) {
	int newX = ((rand() % w) / 10) * 10 - this->getWidth();
	int newY = ((rand() % h) / 10) * 10 - this->getHeight();
	this->setX(newX);
	this->setY(newY);
}


void Snake::Food::Update()
{
}

void Snake::Food::Render(Snake::Window* window, Uint8 r, Uint8 g, Uint8 b)
{
}
