//Rectangle.h
//Definition of Rectangle class

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include"Point.h"

class Rectangle
{
public:
    explicit Rectangle(const Point &ap,const Point &bp,const Point &cp,const Point &dp);    //constructor
    void setLengthAndWidth(const Point &ap,const Point &bp,const Point &cp,const Point &dp);    //set length and width of  rectangle
    double getLength() const;   //get length
    double getWidth() const;    //get width
    double calculatePerimeter(double l,double w);   //calculate perimeter
    double calculateArea(double l,double w);    //calculate area
    void isSquare(double l,double w);   //judge rectangle
private:
    const Point a;  //point of rectangle
    const Point b;  //point of rectangle
    const Point c;  //point of rectangle
    const Point d;  //point of rectangle
    double length;  //length of rectangle
    double width;   //width of rectangle
};
#endif // RECTANGLE_H
