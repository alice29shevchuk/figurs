#include <iostream>
#include"Cube.h"
#include"Line.h"
#include"Rectangle.h"
int main()
{
    Cube cube(10);
    Line line(22);
    Rectangle rectangle(6,10);
    Rectangle res = cube + line;
    res.Print();

}
