#include <iostream>
#include"Cube.h"
#include"Line.h"
#include"Rectangle.h"
#include"Circle.h"
#include"Coin.h"
int main()
{
    Cube cube(5);
    Line line(5);
    Rectangle rectangle(6,10);
    Rectangle res = cube - line;
    res.Print();
    std::cout << "============================";
    Circle circle(10);
    Coin coin(circle,cube);
    Coin res2 = circle + cube;
}
