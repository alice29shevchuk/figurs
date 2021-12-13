#include "Rectangle.h"
#include<iostream>
Rectangle::Rectangle(int width,int hight)
{
	this->width = width;
	this->hight = hight;
}

int Rectangle::getWidth()
{
	return this->width;
}

int Rectangle::getHight()
{
	return this->hight;
}

void Rectangle::Print()
{
	std::cout << this->width << "\t" << this->hight << "\n";
}
