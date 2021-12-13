#pragma once
#include"Circle.h"
#include"Cube.h"
class Coin
{
	Circle *circle;
	Cube *cube;
public:
	Coin(Circle &c, Cube& cube)
	{
		this->circle = new Circle(c);
		this->cube = new Cube(cube);
	}
};

