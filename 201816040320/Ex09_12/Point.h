#include <array>

using namespace std;


class Point
{
private:
    array<double,2> a={};
    array<double,2> b={};
    array<double,2> c={};
    array<double,2> d={};

public:
    Point(double a=0,double a1=0,double b=0,double b1=0,double c=0,double c1=0,double d=0,double d1=0);
    void setA(double,double);
    void setB(double,double);
    void setC(double,double);
    void setD(double,double);
    double getAB();
    double getBC();
    double getCD();
    double getDA();
    int JudeVertical();

};
