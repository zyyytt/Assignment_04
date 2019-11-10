//Point.h
//Definition of Point class


#ifndef POINT_H
#define POINT_H

class Point
{
public:
    explicit Point(double x,double y);  //constructor for  point
    void setXPoint(double x);   // set x point
    void setYPoint(double y);   //set y point
    double getXPoint() const;   //get x point
    double getYPoint() const;   //get y point
private:
    double X;
    double Y;
};
#endif // POINT_H
