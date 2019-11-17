#include <iostream>
#include"Point.h"
using namespace std;

Point::Point(double m,double n)
{
    setx(m);
    sety(n);
}

void Point::setx(double m)
{
    x = m;
}

void Point::sety(double n)
{
    y = n;
}

double Point::getx()
{
    return x;
}

double Point::gety()
{
    return y;
}

