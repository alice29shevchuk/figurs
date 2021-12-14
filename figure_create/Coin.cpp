#include "Coin.h"
Coin::Coin(Circle& circle, Cube& cube)
{
	this->circle = new Circle(circle);
	this->cube = new Cube(cube);
}

