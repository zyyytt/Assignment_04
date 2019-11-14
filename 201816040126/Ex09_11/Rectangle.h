#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED

using namespace std;

#endif // RECTANGLE_H_INCLUDED

class Rectangle
{
public:
    explicit Rectangle( double = 1.0, double = 1.0);
    void setRectangle( double , double );
    void setLength( double l );//function setLength
    void setWidth( double w );//function setWidth

    double getLength();//function getLength
    double getWidth();//function getWidth
    double Perimeter();//function Perimeter
    double Area();
private:
    double length;
    double width;
};// end class Rectangle
