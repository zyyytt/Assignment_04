#include "Point.h"
#include <cmath>
using namespace std;

Point::Point(double a,double a1,double b,double b1,double c,double c1,double d,double d1)
{
    setA(a,a1);
    setB(b,b1);
    setC(c,c1);
    setD(d,d1);
}

void Point::setA(double z, double r)
{
    if(0.0<z&&z<=20.0&&0.0<r&&r<=20.0)
    {
        a[0]=z;
        a[1]=r;
    }
}

void Point::setB(double z, double r)
{
    if(0.0<z&&z<=20.0&&0.0<r&&r<=20.0)
    {
        b[0]=z;
        b[1]=r;
    }
}

void Point::setC(double z, double r)
{
    if(0.0<z&&z<=20.0&&0.0<r&&r<=20.0)
    {
        c[0]=z;
        c[1]=r;
    }
}

void Point::setD(double z, double r)
{
    if(0.0<z&&z<=20.0&&0.0<r&&r<=20.0)
    {
        d[0]=z;
        d[1]=r;
    }
}

double Point::getAB()
{
    double len=sqrt((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));
    return len;
}

double Point::getBC()
{
    double len = sqrt((b[0]-c[0])*(b[0]-c[0])+(b[1]-c[1])*(b[1]-c[1]));
    return len;
}

double Point::getCD()
{
    double len = sqrt((c[0]-d[0])*(c[0]-d[0])+(c[1]-d[1])*(c[1]-d[1]));
    return len;
}

double Point::getDA()
{
    double len = sqrt((d[0]-a[0])*(d[0]-a[0])+(d[1]-a[1])*(d[1]-a[1]));
    return len;
}

int Point::JudeVertical()
{
    if((a[0]-b[0])*(b[0]-c[0])+(a[1]-b[1])*(b[1]-c[1])==0)
        return 1;
    else
        return 0;
}
