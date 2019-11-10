#include "Point.h"
using namespace std;

class Rectangle
{
private:
    Point point;

public:
    Rectangle(double, double, double, double, double, double, double, double );//构造函数
    double getLength();//获取长度
    double getWidth();//获取宽度
    double perimeter();//计算周长
    double area();//计算面积
    void square();//判定是否是正方形
};
