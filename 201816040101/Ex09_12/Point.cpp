#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(double a1,double a2,double b1,double b2,  double c1,double c2,double d1,double d2)
{
    x1=a1;  y1=a2;
    x2=b1;  y2=b2;
    x3=c1;  y3=c2;
    x4=d1;  y4=d2;
}
void Point::setPoint(double a1,double a2,double b1,double b2,  double c1,double c2,double d1,double d2)
{
    x1=a1;  y1=a2;
    x2=b1;  y2=b2;
    x3=c1;  y3=c2;
    x4=d1;  y4=d2;
}
Point Point::getPoint()
{
    return *this;
}
double Point:: Length(double a,double b)
{
    return b-a;
}
double Point:: Width(double a,double b)
{
    return b-a;
}
void Point::square()
{
    double x=x2-x1;
    double y=y2-y1;
    if(x==y)
        cout<<"this is square\n";
    else
        cout<<"this is not square\n";

}
