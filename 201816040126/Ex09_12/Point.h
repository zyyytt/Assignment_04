#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED



#endif // POINT_H_INCLUDED

using namespace std;

class Point
{
public:
    explicit Point( double = 1.0, double = 1.0);
    void setCoordinate( double , double );//function set coordinate
    void setX( double x );//function set X
    void setY( double y );//function set Y
    double judgesquare( double a,double b);//function to judge if it is square

    double getX();//function get XC
    double getY();//function get YC
private:
    double XC;
    double YC;

};// end class Point
