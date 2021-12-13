#include "Cube.h";
#include<iostream>

Cube::Cube(int size)
{
	this->size = size;
}

int Cube::getSize()
{
	return this->size;
}

Rectangle Cube::operator+(Line other)
{
	return Rectangle(this->getSize()+other.getLong_Size(), this->size);
}




