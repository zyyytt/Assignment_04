#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED



#endif // RECTANGLE_H_INCLUDED
class Rectangle
{
public:
    Rectangle(double,double);
    void set_length(double);
    void set_width(double);
    double get_length();
    double get_width();
    double perimeter();
    double area();
    void check();
private:
    double length;
    double width;
};
