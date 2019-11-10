#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

#include "Point.h"
/*return the value of length ,width ,p*/
class Rectangle
{
public:
    Rectangle( Point &, Point & , Point & , Point & );//Use the referenced method to complete the composition
    void setLength( Point &, Point & , Point & , Point & );
    void setWidth( Point &, Point & , Point & , Point & );
    double getLength();
    double getWidth();
    double getPerimeter();
    double getArea();
    bool JudgeSquare();
private:
    double length;
    double width;

};


#endif // RECTANGLE_H_INCLUDED
