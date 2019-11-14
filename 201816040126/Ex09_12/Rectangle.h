#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

using namespace std;

#endif // RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    explicit Rectangle( double = 1.0, double = 1.0);
    void setRectangle( double , double );
    void setLength( double );//the function set length
    void setWidth( double );//the function set width
    double getLength();//the function get length
    double getWidth();//the function get width

    double Perimeter();//the function about perimeter
    double Area() ;//the function about area

private:
    double length;
    double width;
};// end class Rectangle
