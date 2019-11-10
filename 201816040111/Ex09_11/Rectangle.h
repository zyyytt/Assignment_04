#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double = 1,double = 1);//Initial value of the constructor 1
    void setPerimeter(double , double);//A function to set perimeter
    void setArea(double , double);//A function to set area
    double getPerimeter();//A function to get perimeter
    double getArea();//A function to get area

private:
    double perimeter;
    double area;
};


#endif // RECTANGLE_H_INCLUDED
