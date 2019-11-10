#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    explicit Rectangle(double ,double);
    double getlength( );
    double getwidth();
    void setlength(double Length);
    void setwidth(double Width);
    double perimeter();
    double area();
private:
    double length;
    double width;
};


#endif // RECTANGLE_H_INCLUDED
