#include "Circle.h"
Circle::Circle(int diametr)
{
	this->diametr = diametr;
}

int Circle::getDiametr()
{
	return this->diametr;
}

Coin Circle::operator+(Cube& other)
{
	return Coin(this->getDiametr() + other.getSize());
}
