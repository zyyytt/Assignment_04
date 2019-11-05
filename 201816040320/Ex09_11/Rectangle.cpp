#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double len, double wide)
{
    setLength(len);
    setWidth(wide);
}
// 构造函数
void Rectangle::setLength(double a)
{
    if(0.0<a&&a<20.0)
        length=a;
    else
        length=-1;
}
//设置长度
void Rectangle::setWidth(double a)
{
    if(0.0<a&&a<20.0)
        width=a;
    else
        width=-1;
}
//设置宽度
double Rectangle::getLength()
{
    return length;
}
//获取长度
double Rectangle::getWidth()
{
    return width;
}
//获取宽度
double Rectangle::perimeter()
{
    return 2*(getLength()+getWidth());
}
//计算周长
double Rectangle::area()
{
    return getLength()*getWidth();
}
//计算面积
