#pragma once
#include "Coin.h"
#include "Cube.h"
class Circle
{
	int diametr;
public:
	Circle(int);
	int getDiametr();
	Coin operator+(Cube&);
};

