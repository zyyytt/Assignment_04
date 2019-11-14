#include <iostream>
#include "Point.h"

using namespace std;

Point::Point( double x , double y)
{
    setCoordinate( x , y);//set coordinate
}

void Point::setCoordinate(double XC ,double YC)
{
    setX( XC );
    setY( YC );
}

void Point::setX( double x )//function setX
{
    if( x >= 0.0 && x <=20.0)
    {
        XC = x;
    }
    else{
        cout << "!!!警告：该坐标x轴输入错误！\n初始化x为 1\n" << endl;
         XC = 1.0;
    }
}

void Point::setY( double y )//function setY
{
    if( y >= 0.0 && y <=20.0)
    {
        YC = y;
    }
    else{
        cout << "!!!警告：该长方形宽度输入错误！\n初始化宽度为 1\n" << endl;
         YC = 1.0;
    }
}

double Point::getX()//function get XC
{
    return XC;
}

double Point::getY()//function get YC
{
    return YC;
}

double Point::judgesquare( double a,double b)
{
    if(a == b)//judge if it is the square
    {
        cout << "\n判断：该坐标构成的图形为特殊的长方形————正方形！\n" << endl;
    }
    else{
        cout << "\n判断：该坐标构成的图形不为正方形！\n" << endl;
    }
}
