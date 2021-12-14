#pragma once
#include"Circle.h"
#include"Cube.h"
class Coin
{
	Circle *circle;
	Cube *cube;
public:
	Coin(Circle& , Cube&);
};

