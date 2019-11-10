//Rectangle.cpp
// Member-function definitions for class Rectangle

#include"Rectangle.h"   //include definition of class rectangle
#include<stdexcept>

using namespace std;

//constructor
Rectangle::Rectangle(double Length,double Width)
{
    setLength(Length);
    setWidth(Width);
}

//function to set length of rectangle
void Rectangle::setLength(double l)
{
    if(l>0&&l<20)
        length=l;
    else
    {
        throw invalid_argument("range of length is error");
    }

}

//function to set width of rectangle
void Rectangle::setWidth(double w)
{
    if(w>0&&w<20)
        width=w;
    else
    {
        throw invalid_argument("range of width is error");
    }

}

//function to get length of rectangle
double Rectangle::getLength() const
{
    return length;
}

//function to get width of rectangle
double Rectangle::getWidth() const
{
    return width;
}

//function to calculate perimeter of rectangle
double Rectangle::calculatePerimeter(double l,double w)
{
    return 2*(l+w);
}

//function to calculate area of rectangle
double Rectangle::calculateArea(double l,double w)
{
    return l*w;
}


