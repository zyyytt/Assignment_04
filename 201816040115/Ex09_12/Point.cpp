//Point.cpp

#include"Point.h"
#include<stdexcept>

using namespace std;

//function to set point
Point::Point(double x,double y)
{
    setXPoint(x);
    setYPoint(y);
}

//function to set x point
void Point::setXPoint(double x)
{
    if(x>0&&x<20)
    {
        X=x;
    }
    else
    {
        throw invalid_argument("X range error!");
    }
}

//function to set y point
void Point::setYPoint(double y)
{
    if(y>0&&y<20)
    {
        Y=y;
    }
    else
    {
        throw invalid_argument("Y range error!");
    }
}

//function to get x point
double Point::getXPoint() const
{
    return X;
}

//function to get y point
double Point::getYPoint() const
{
    return Y;
}
