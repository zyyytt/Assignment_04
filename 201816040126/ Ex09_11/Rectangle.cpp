#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle( double length , double width)
{
    setRectangle( length ,width);//set Rectangle
}

void Rectangle::setRectangle(double l ,double w)
{
    setLength(l);
    setWidth(w);
}

void Rectangle::setLength( double l )//function setLength
{
    if( l >= 0.0 && l <=20.0)
    {
        length = l;
    }
    else{
        cout << "该长方形长度输入错误！\n初始化长度为 1\n" << endl;
         length = 1.0;
    }
}

void Rectangle::setWidth( double w )//function setWidth
{
    if( w >= 0.0 && w <=20.0)
    {
        width = w;
    }
    else{
        cout << "该长方形宽度输入错误！\n初始化宽度为 1\n" << endl;
         width = 1.0;
    }
}

double Rectangle::getLength()//function getLength
{
    return length;
}

double Rectangle::getWidth()//function getWidth
{
    return width;
}


double Rectangle::Perimeter()//function Perimeter
{
    return 2 * ( length + width );
}
double Rectangle::Area()
{
    return  length * width;//function Area
}
