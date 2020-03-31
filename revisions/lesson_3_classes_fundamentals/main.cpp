#include <iostream>
#include "Point2D.hpp"


int main()
{
    Point2D point1;
    Point2D point2;
    point1.PrintPoint();
    point2.PrintPoint();
    ++point1;
    point2--;
    point2++;
    Point2D point3 = point1 + point2;
    point3.PrintPoint();

    return 0;
}
