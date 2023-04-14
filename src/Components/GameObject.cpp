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



void Snake::GameObject::Render(Snake::Window* window, Uint8 r, Uint8 g, Uint8 b)
{
    for (int i = this->getX(); i <= this->getX() + this->getWidth(); i++) {
        for (int j = this->getY(); j <= this->getY() + this->getHeight(); j++) {

            window->setPixel(i, j, r, g, b);

        }
    }

}


//lazy collision algo
bool Snake::GameObject::collidesWith(GameObject& other) {

    float centerX = this->getX() + (this->getWidth() / 2);
    float centerY = this->getY() + (this->getHeight() / 2);

    //within x direction
    if (centerX > other.getX() && centerX < (other.getX() + other.getWidth())) {

        if (centerY > other.getY() && centerY < (other.getY() + other.getHeight())) {
        
            return true;
        
        }

    }

    return false; 
}