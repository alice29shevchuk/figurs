#include <iostream>
#include"Cube.h"
#include"Line.h"
#include"Rectangle.h"
#include"Circle.h"
#include"Coin.h"
int main()
{
    Cube cube(10);
    Line line(5);
    Rectangle rectangle(6,10);
    Rectangle res = cube - line;
    res.Print();

    Circle ci;
    Coin c(ci, cube);
}
