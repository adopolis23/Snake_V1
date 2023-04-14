#include "Food.h"

#define LOG(x) std::cout << x << std::endl

Snake::Food::Food()
{
	this->setWidth(20);
	this->setHeight(20);

	srand((unsigned)time(NULL));
}


void Snake::Food::setRandomPosition(int w, int h) {
	int newX = ((rand() % w) / 20) * 20 - this->getWidth();
	int newY = ((rand() % h) / 20) * 20 - this->getHeight();
	
	LOG("New Position Set: " << newX << " : " << newY);
	
	this->setX(newX);
	this->setY(newY);
}

void Snake::Food::Render(Snake::Window* window) {
	this->GameObject::Render(window, Food_Red_Value, Food_Green_Value, Food_Blue_Value);
}

void Snake::Food::Update()
{
}

