//Rectangle.cpp

#include"Point.h"
#include"Rectangle.h"
#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

Rectangle::Rectangle(const Point &ap,const Point &bp,const Point &cp,const Point &dp)   //constructor
    :a(ap),
     b(bp),
     c(cp),
     d(dp)
{
    setLengthAndWidth(ap,bp,cp,dp);
}

//function to set length and width of rectangle
void Rectangle::setLengthAndWidth(const Point &ap,const Point &bp,const Point &cp,const Point &dp)
{
    double temp1, temp2;
    if(ap.getYPoint()==bp.getYPoint())
    {
        temp1=fabs(ap.getXPoint()-bp.getXPoint());
    }
    else if(ap.getYPoint()==cp.getYPoint())
    {
        temp1=fabs(ap.getXPoint()-cp.getXPoint());
    }
    else if(ap.getYPoint()==dp.getYPoint())
    {
        temp1=fabs(ap.getXPoint()-dp.getXPoint());
    }
    if(ap.getXPoint()==bp.getXPoint())
    {
        temp2=fabs(ap.getYPoint()-bp.getYPoint());
    }
    else if(ap.getXPoint()==cp.getXPoint())
    {
        temp2=fabs(ap.getYPoint()-cp.getYPoint());
    }
    else if(ap.getXPoint()==dp.getXPoint())
    {
        temp2=fabs(ap.getYPoint()-dp.getYPoint());
    }
    length=max(temp1,temp2);
    width=min(temp1,temp2);
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
void Rectangle::isSquare(double l,double w)
{
    if(l==w)
        cout << "This rectangle is square!" << endl;
    else
        cout << "This rectangle isn't square!" << endl;

}


