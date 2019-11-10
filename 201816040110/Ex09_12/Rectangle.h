#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "Point.h"
class Rectangle
{
public:
    explicit Rectangle(double ,double,double ,double ,double ,double ,double ,double );
    void setdate(double ,double ,double ,double ,double ,double ,double,double );
    void display();
    int check1();
    void check2();
    double getlength();
    double getwidth();
    void  setlength();
    void  setwidth();
    double perimeter();
    double area();
private:
    double x1;
    double y1;
    double x2;
    double y2;
    double x3;
    double y3;
    double x4;
    double y4;
    double length;
    double width;
};


#endif // RECTANGLE_H_INCLUDED
