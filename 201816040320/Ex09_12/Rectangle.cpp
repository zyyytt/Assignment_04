#include <iostream>
#include "Rectangle.h"
#include <array>
using namespace std;

int main()
{
    array<double,8> num={};
    cout << "输入4个坐标的数值"<<endl;
    for(double &n:num)
    {
        cin >>n;
    }
    cout <<"("<<num[0]<<","<<num[1]<<")"<<endl;
    cout <<"("<<num[2]<<","<<num[3]<<")"<<endl;
    cout <<"("<<num[4]<<","<<num[5]<<")"<<endl;
    cout <<"("<<num[6]<<","<<num[7]<<")"<<endl;

    Rectangle a(num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7]);
    a.square();
    cout <<"The length is "<<a.getLength()<<endl;
    cout <<"The width is "<< a.getWidth() <<endl;
    cout <<"The perimeter is " << a.perimeter()<<endl;
    cout <<"The area is "<<a.area()<<endl;

}
