#include <iostream>
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle(double l,double d)//constructor
{
    set_length(l);
    set_width(d);
}

void Rectangle::set_length(double l)//define to set length
{
    length = l;
}

void Rectangle::set_width(double d)//define to set width
{
    width = d;
}

double Rectangle::get_length()//define to get length
{
    return length;
}

double Rectangle::get_width()//define to get width
{
    return width;
}

double Rectangle::perimeter()//define to get Rectangle's perimeter
{
    return 2*(length+width);
}

double Rectangle::area()//define to get Rectangle's area
{
    return length*width;
}

void Rectangle::check()//define to check these data normative or not
{
    if(length<0.0||length>20.0)
    {
        cout<<"length is not meet the requirements"<<endl;
    }
    else if(width<0.0||width>20.0)
    {
        cout<<"width is not meet the requirements"<<endl;
    }
    else
        cout<<"Data are normative"<<endl;
}
