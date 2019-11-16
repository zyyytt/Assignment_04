#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

class Rectangle{
public:
    Rectangle(double=1, double=1);
    void setLength(double );
    double getLength();
    void setWidth(double );
    double getWidth();
    double perimeter();
    double area();
private:
    double length;
    double width;
};


#endif // RECTANGLE_H_INCLUDED
