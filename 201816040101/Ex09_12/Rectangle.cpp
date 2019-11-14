
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle(double a, double b)
 {
     setlength(a);
 }
void Rectangle:: setlength(double a)
{
    if(a>=0&&a<=20)
        length=a;
    else
        cout<<"it is wrong\n";
}
double Rectangle:: getlength()
{
    return length;
}
void Rectangle:: setwidth(double a)
{
    if(a>=0&&a<=20)
        width=a;
    else
        cout<<"it is wrong\n";
}
double Rectangle:: getwidth()
{
    return width;
}
double Rectangle:: perimeter()//ÖÜ³¤
{
    return 2*(length+width);
}
double Rectangle:: area()//Ãæ»ý
{
    return length*width;
}
