
#include <iostream>
#include "Rectangle.h"
using namespace std;


 Rectangle::Rectangle(double a, double b)
 {
     setlength(a);
     setwidth(b);
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
double Rectangle:: perimeter()
{
    return 2*(length+width);
}
double Rectangle:: area()
{
    return length*width;
}
