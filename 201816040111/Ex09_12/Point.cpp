#include "Point.h"
#include <iostream>
#include <math.h>
using namespace std;

Point::Point(double x1,double y1)
{
    setFourPoints(x1,y1);
}

void Point::setFourPoints(double x1,double y1)
{
    if (x1 > 0 && y1 >0 && x1 < 20 && y1 <20)//Determine if the value of x, y is in the first quadrant
    {
         x = x1;
         y  = y1;
    }

}

double Point::getPointX()
{
    return x;
}

double Point::getPointY()
{
    return y;
}
