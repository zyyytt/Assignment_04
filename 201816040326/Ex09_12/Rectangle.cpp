#include"Point.h"
#include"Rectangle.h"
#include<vector>
using namespace std;

Rectangle::Rectangle(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    A.setx(x1);
    A.sety(y1);
    B.setx(x2);
    B.sety(y2);
    C.setx(x3);
    C.sety(y3);
    D.setx(x4);
    D.sety(y4);
}

double Rectangle::get_length()
{
    length=max((max(A.getx(),max(B.getx(),max(C.getx(),D.getx())))-min(A.getx(),min(B.getx(),min(C.getx(),D.getx())))),(max(A.gety(),max(B.gety(),max(C.gety(),D.gety())))-min(A.gety(),min(B.gety(),min(C.gety(),D.gety())))));
    return length;
}

double Rectangle::get_width()
{
    width=min((max(A.getx(),max(B.getx(),max(C.getx(),D.getx())))-min(A.getx(),min(B.getx(),min(C.getx(),D.getx())))),(max(A.gety(),max(B.gety(),max(C.gety(),D.gety())))-min(A.gety(),min(B.gety(),min(C.gety(),D.gety())))));
    return width;
}

double Rectangle::get_perimeter()
{
    perimeter=(get_length()+get_width())*2;
    return perimeter;
}

double Rectangle::get_area()
{
    area=get_length()*get_width();
    return area;
}
void Rectangle::check(double x1,double y1,double x2,double y2,double x3,double y3,double x4,double y4)
{
    int flag=1;
    if(x1<0.0||x1>20.0)
        flag =0;
    if(y1<0.0||y1>20.0)
        flag =0;
    if(x2<0.0||x2>20.0)
        flag =0;
    if(y2<0.0||y2>20.0)
        flag =0;
    if(x3<0.0||y3>20.0)
        flag = 0;
    if(y3<0.0||y3>20.0)
        flag =0;
    if(x4<0.0||x4>20.0)
        flag =0;
    if(y4<0.0||y4>20.0)
        flag =0;
    if(flag == 0)
    {
        cout<<"EORROR:The data is not in compliance with the requirements"<<endl;
    }
    else
    {
        cout<<"The data is in compliance with the requirements"<<endl;
    }

}

void Rectangle::verify_Square()
{
    if(area == 2*get_length)
    cout<<"it's a square!"<<endl;
}

