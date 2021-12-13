#pragma once
#include "Rectangle.h";
#include "Line.h";

class Cube
{
	int size;
public:
	Cube(int);
	int getSize();
	Rectangle operator+(Line other);
	Rectangle operator-(Line other);
};

