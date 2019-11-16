#include<iostream>
#include<stdexcept>
#include"Point.h"
using namespace std;

Point::Point(double xx, double yy)
{
	setPointx(xx);
	setPointy(yy);
}

void Point::setPointx(double xx)
{
	if (xx >= 0 && xx <= 20)
		x = xx;
	else
		throw invalid_argument("x is out of range");
}

void Point::setPointy(double yy)
{
	if (yy >= 0 && yy <= 20)
		y = yy;
	else
		throw invalid_argument("y is out of range");
}

double Point::getPointy()
{
	return y;
}

double Point::getPointx()
{
	return x;
}
