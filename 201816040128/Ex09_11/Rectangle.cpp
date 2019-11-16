#include <iostream>
using namespace std;
#include<stdexcept>
#include"Rectangle.h"

 Rectangle::Rectangle(double length, double width)
 {
     setLength(length);
     setWidth(width);
 }

void Rectangle::setLength(double lengt)
{
    if(length>0&&length<20)
    {
        length=lengt;
    }else
        throw invalid_argument(

         "request length <20 && length>0");

}
 double Rectangle::getLength()
 {
     return length;
 }
void Rectangle::setWidth(double widt)
{
    if(width>0&&width<20)
    {
        width=widt;
    }else
        throw invalid_argument(

         "request width <20 && width>0");
}
double Rectangle::getWidth()
{
    return width;
}
double Rectangle::perimeter()
{
    return 2*(width+length);
}
double Rectangle::area()
{
    return width*length;
}
