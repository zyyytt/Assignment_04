#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include"Point.h"


#endif // RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double,double,double,double,double,double,double,double);
    void check(double,double,double,double,double,double,double,double);
    double get_length();
    double get_width();
    double get_area();
    double get_perimter();
    void verify_Rectangle();
    void verify_Square();
private:
    double length;
    double width;
    double perimeter;
    double area;
    Point A,B,C,D;
};
