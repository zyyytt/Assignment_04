#include "Point.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

Rectangle::Rectangle(Point &xy1,Point &xy2,Point &xy3,Point &xy4)//Constructor of Rectangle receives four points from the Class of Point
{
    setLength(xy1,xy2,xy3,xy4);
    setWidth(xy1,xy2,xy3,xy4);
}

void Rectangle::setLength(Point &xy1,Point &xy2,Point &xy3,Point &xy4)
{
    if(xy1.getPointX() > xy2.getPointX() && xy1.getPointY() > xy3.getPointY())//Judging length and width in four points
    length = xy1.getPointX() - xy4.getPointX();//It is length
}

void Rectangle::setWidth(Point &xy1,Point &xy2,Point &xy3,Point &xy4)
{
    if(xy1.getPointX() > xy2.getPointX() && xy1.getPointY() > xy3.getPointY())//Judging length and width in four points
    width = xy1.getPointY() - xy4.getPointY();//It is width
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getPerimeter()
{
    return  ( length + width ) * 2;
}

double Rectangle::getArea()
{
    return length * width ;
}

bool Rectangle::JudgeSquare()//Determine if it is a square
{
    if(width == length)
        return false;
    else
        return true;
}
