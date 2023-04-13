#include "GameObject.h"

void Snake::GameObject::setWidth(unsigned int w)
{
    this->width = w;
}

unsigned int Snake::GameObject::getWidth()
{
    return this->width;
}

void Snake::GameObject::setHeight(unsigned int h)
{
    this->height = h;
}

unsigned int Snake::GameObject::getHeight()
{
    return this->height;
}

void Snake::GameObject::setX(int x) {
    this->x = x;
}

int Snake::GameObject::getX() {
    return this->x;
}

void Snake::GameObject::setY(int y) {
    this->y = y;
}

int Snake::GameObject::getY() {
    return this->y;
}
