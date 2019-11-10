//Rectangle.h
//Definition of Rectangle class

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
    explicit Rectangle(double = 1,double = 1);  //default of constructor
    void setLength(double l);   //set length
    void setWidth(double w);    //set width
    double getLength() const;   //get length
    double getWidth() const;    //get width
    double calculatePerimeter(double l,double w);  //calculate the perimeter
    double calculateArea(double l,double w);        //calculate the area
private:
    double length;  //length of rectangle
    double width;   //width of rectangle
};
#endif // RECTANGLE_H
