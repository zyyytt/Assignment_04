#include <iostream>
using namespace std;
#include "math.h"
#include "Rectangle.h"
#include <windows.h>
#include <stdio.h>
#include <windef.h>
#include "Point.h"
Rectangle::Rectangle(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4)
{
    setdate(X1, Y1, X2, Y2, X3, Y3, X4, Y4);
}
void Rectangle::setdate(double X1,double Y1,double X2,double Y2,double X3,double Y3,double X4,double Y4)
{
    if(X1>=0&&X1<=20.0)
    {
        x1=X1;
    }
    else
    {
        cout<<"out of range"<<endl;
    }
    if(Y1>=0&&Y1<=20.0)
    {
        y1=Y1;
    }
    else
    {
        cout<<"out of range"<<endl;

    }
    if(X2>=0&&X2<=20.0)
    {
        x2=X2;
    }
    else
    {
        cout<<"out of range"<<endl;

    }
    if(Y2>=0&&Y2<=20.0)
    {
        y2=Y2;
    }
    else
    {
        cout<<"out of range"<<endl;

    }
    if(X3>=0&&X3<=20.0)
    {
        x3=X3;
    }
    else
    {
        cout<<"out of range"<<endl;

    }
    if(Y3>=0&&Y3<=20.0)
    {
        y3=Y3;
    }
    else
    {
        cout<<"out of range"<<endl;

    }
    if(X4>=0&&X4<=20.0)
    {
        x4=X4;
    }
    else
    {
        cout<<"out of range"<<endl;

    }
    if(Y4>=0&&Y4<=20.0)
    {
        y4=Y4;
    }
    else
    {
        cout<<"out of range"<<endl;

    }
}
int Rectangle::check1()
{
    double p,q,r,t;
    int x=0,z=0,y=0,c=0;
    p=min(x1,x2);//x最小值
    p=min(x2,x3);
    p=min(x3,x4);
    p=min(x4,x1);
    q=max(y1,y2);//y最大值
    q=max(y2,y3);
    q=max(y3,y4);
    q=max(y4,y1);
    r=max(x1,x2);//x最大值
    r=max(x2,x3);
    r=max(x3,x4);
    r=max(x4,x1);
    t=min(y1,y2);//y最小值
    t=min(y2,y3);
    t=min(y3,y4);
    t=min(y4,y1);
    if(x1==p)
        x++;
    if(x2==p)
        x++;
    if(x3==p)
        x++;
    if(x4==p)
        x++;
    if(x1==r)
        z++;
    if(x2==r)
        z++;
    if(x3==r)
        z++;
    if(x4==r)
        z++;
    if(y1==q)
        y++;
    if(y2==q)
        y++;
    if(y3==q)
        y++;
    if(y4==q)
        y++;
    if(y1==t)
        c++;
    if(y2==t)
        c++;
    if(y3==t)
        c++;
    if(y4==t)
        c++;
    if(x==2&&y==2&&z==2&&c==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void  Rectangle::setlength()
{
     length=sqrt((y1-y2)*(y1-y2)+(x1-x2)*(x1-x2));
}
double  Rectangle::getlength()
{
    double p,q,r,t,x,y;
    p=min(x1,x2);//x最小值
    if(p>x3)
    {
        p=x3;
        if(p>x4)
        {
            p=x4;
        }
    }
    t=min(y1,y2);//y最小值
    if(t>y3)
    {
        t=y3;
        if(t>y4)
        {
            t=y4;
        }
    }
    r=max(x1,x2);//x最大值
    if(r<x3)
    {
        r=x3;
        if(r<x4)
        {
            r=x4;
        }
    }
    q=max(y1,y2);//y最大值
    if(q<y3)
    {
        q=y3;
        if(q<y4)
        {
            q=y4;
        }
    }
    x=r-p;
    y=q-t;
    length = max(x,y);
    return max(x,y);
}
void  Rectangle::setwidth()
{
    width= sqrt((y3-y2)*(y3-y2)+(x3-x2)*(x3-x2));
}
double  Rectangle::getwidth()
{
    double p,q,r,t,x,y;
    p=min(x1,x2);//x最小值
    if(p>x3)
    {
        p=x3;
        if(p>x4)
        {
            p=x4;
        }
    }
    t=min(y1,y2);//y最小值
    if(t>y3)
    {
        t=y3;
        if(t>y4)
        {
            t=y4;
        }
    }
    r=max(x1,x2);//x最大值
    if(r<x3)
    {
        r=x3;
        if(r<x4)
        {
            r=x4;
        }
    }
    q=max(y1,y2);//y最大值
    if(q<y3)
    {
        q=y3;
        if(q<y4)
        {
            q=y4;
        }
    }
    x=r-p;
    y=q-t;
    width=min(x,y);
    return min(x,y);
}
double Rectangle::perimeter()
{
    double p,q,r,t,x,y;
    p=min(x1,x2);//x最小值
    if(p>x3)
    {
        p=x3;
        if(p>x4)
        {
            p=x4;
        }
    }
    t=min(y1,y2);//y最小值
    if(t>y3)
    {
        t=y3;
        if(t>y4)
        {
            t=y4;
        }
    }
    r=max(x1,x2);//x最大值
    if(r<x3)
    {
        r=x3;
        if(r<x4)
        {
            r=x4;
        }
    }
    q=max(y1,y2);//y最大值
    if(q<y3)
    {
        q=y3;
        if(q<y4)
        {
            q=y4;
        }
    }
    x=r-p;
    y=q-t;
    return 2*(x+y);
}
double Rectangle::area()
{
    double p,q,r,t,x,y;
    p=min(x1,x2);//x最小值
    if(p>x3)
    {
        p=x3;
        if(p>x4)
        {
            p=x4;
        }
    }
    t=min(y1,y2);//y最小值
    if(t>y3)
    {
        t=y3;
        if(t>y4)
        {
            t=y4;
        }
    }
    r=max(x1,x2);//x最大值
    if(r<x3)
    {
        r=x3;
        if(r<x4)
        {
            r=x4;
        }
    }
    q=max(y1,y2);//y最大值
    if(q<y3)
    {
        q=y3;
        if(q<y4)
        {
            q=y4;
        }
    }
    x=r-p;
    y=q-t;
    return x*y;
}
void Rectangle::display()
{
    cout<<x1<<y1<<"\n"<<x2<<y2<<"\n"<<x3<<y3<<"\n"<<x4<<y4<<endl;
}
void Rectangle::check2()
{
    if(length==width)
    {
        cout<<"This is a square"<<endl;
    }
    else
    {
        cout<<"This is not a square"<<endl;
    }
}








