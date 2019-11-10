#include <iostream>
using namespace std;

#include "Rectangle.h"
Rectangle::Rectangle(double Length , double Width)
:length (1),width(1)
{
    setlength(Length);
    setwidth( Width);
}
void  Rectangle::setlength(double Length)
{
    if(Length > 0.0&& Length < 20.0)
    {
        length=Length;
    }
}
void Rectangle::setwidth(double Width)
{
    if(Width > 0.0&& Width < 20.0)
    {
        width=Width;
    }
}
double  Rectangle::getwidth()
{
    return width;
}
double  Rectangle::getlength()
{
    return length;
}
double Rectangle::perimeter()
{
    return 2*(length+width);
}
double Rectangle::area()
{
    return length * width;
}



