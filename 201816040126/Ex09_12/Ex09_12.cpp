#include <iostream>
#include <math.h>

#include "Rectangle.h"
#include "Point.h"

using namespace std;

int main()
{
    Point P1,P2,P3,P4,P; /* Instantiate an object of type Point */

    Rectangle R;
    /* Instantiate an object of type Rectangle */

    double x1 = 1.0,y1 = 1.0;
    double x2 = 1.0,y2 = 1.0;
    double x3 = 1.0,y3 = 1.0;
    double x4 = 1.0,y4 = 1.0;
    //set 4 points
    double a,b,c;

    cout << "请输入第一个x坐标: " ;
    cin >> x1 ;
    P1.setX(x1);
    cout << "请输入第一个y坐标: " ;
    cin >> y1;
    P1.setY(y1);
    cout << "第一个坐标为： ( " << P1.getX() << " , " << P1.getY() << " )\n" << endl;
    //the first point

    cout << "请输入第二个x坐标: " ;
    cin >> x2 ;
    P2.setX(x2);
    cout << "请输入第二个y坐标: " ;
    cin >> y2;
    P2.setY(y2);
    cout << "第二个坐标为： ( " << P2.getX() << " , " << P2.getY() << " )\n" << endl;
    //the second point

    cout << "请输入第三个x坐标: " ;
    cin >> x3 ;
    P3.setX(x3);
    cout << "请输入第三个y坐标: " ;
    cin >> y3;
    P3.setY(y3);
    cout << "第三个坐标为： ( " << P3.getX() << " , " << P3.getY() << " )\n" << endl;
    //the third point

    cout << "请输入第四个x坐标: " ;
    cin >> x4 ;
    P4.setX(x4);
    cout << "请输入第四个y坐标: " ;
    cin >> y4;
    P4.setY(y4);
    cout << "第四个坐标为： ( " << P4.getX() << " , " << P4.getY() << " )\n" << endl;
    //the fourth point

    cout << "设a,b,c分别为其中一个点到另外三个点的平方距离" << endl;
    a = ((P2.getX() - P1.getX()) * (P2.getX() - P1.getX()) + (P2.getY() - P1.getY()) * (P2.getY() - P1.getY()));
    b = ((P3.getX() - P1.getX()) * (P3.getX() - P1.getX()) + (P3.getY() - P1.getY()) * (P3.getY() - P1.getY()));
    c = ((P4.getX() - P1.getX()) * (P4.getX() - P1.getX()) + (P4.getY() - P1.getY()) * (P4.getY() - P1.getY()));

    cout << "a = " << a << "  b = " << b << "  c = " << c << endl;//display three lengths

    if( c==a+b || b==a+c || a==b+c)//judge if it is a rectangle
    {
        cout << "\n判断：该坐标构成的图形为长方形！" << endl;
    }
    else
        cout << "\n判断：该坐标构成的图形不为长方形！" << endl;

        int temp;

    if(a>b) {
        temp=a,a=b,b=temp;}
    if(b>c) {
        temp=b,b=c,c=temp;}
    if(a>b) {
        temp=a,a=b,b=temp;}
        //make the longer become length,the shorter become width

    a = sqrt(a); b = sqrt(b); c = sqrt(c);//calculate the length and width


    R.setLength(b);
    cout << "\n该长方形的长为： " << R.getLength() << endl;//display the length

    R.setWidth(a);
    cout << "该长方形的宽为： " << R.getWidth() << endl;//display the width

    P.judgesquare(a,b);//judge if it is a square


    cout << "长方形的周长：" << R.Perimeter() << endl;//display the perimeter
    cout << "长方形的面积：" << R.Area() << endl;//display the area

}

