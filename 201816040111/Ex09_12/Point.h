#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
/*return the value of x and y*/
class Point
{
public:
    Point(double = 0 , double = 0);//Default values for two double types
    void setFourPoints(double , double);
    double getPointX();
    double getPointY();
private:
    double x;
    double y;
};
#endif // POINT_H_INCLUDED
