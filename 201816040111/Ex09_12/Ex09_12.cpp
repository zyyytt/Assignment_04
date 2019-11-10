#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    /*This is an example about rectangle and square*/
    cout << "A example of rectangle: "<<endl;
    cout << "x1 = 4,y1 = 2" << endl << "x2 = 1,y2 = 2" << endl << "x3 = 4,y3 = 1" << endl << "x4 = 1,y4 = 1" << endl;

    cout << "A example of square: "<<endl;
    cout << "x1 = 2,y1 = 2" << endl << "x2 = 1,y2 = 2" << endl << "x3 = 2,y3 = 1" << endl << "x4 = 1,y4 = 1" << endl;
    // * * * * * * *//
    /*Define four points*/
    double px1 , py1;
    double px2 , py2;
    double px3 , py3;
    double px4 , py4;

    cout << "Please enter four points : " << endl;
    /*Enter four points*/
    cout << "x1 : " ;
    cin >> px1 ;
    cout << "y1 : " ;
    cin >> py1 ;

    cout << "x2 : " ;
    cin >> px2 ;
    cout << "y2 : " ;
    cin >> py2 ;

    cout << "x3 : " ;
    cin >> px3 ;
    cout << "y3 : " ;
    cin >> py3 ;

    cout << "x4 : " ;
    cin >> px4 ;
    cout << "y4 : " ;
    cin >> py4 ;
    /*Initialize four points in the class of Point*/
    Point point1(px1,py1);
    Point point2(px2,py2);
    Point point3(px3,py3);
    Point point4(px4,py4);
    /*Initialize four points in the class of Rectangle*/
    Rectangle rec(point1,point2,point3,point4);

    cout << "length : "<< rec.getLength() << "  " << "width : " << rec.getWidth() << endl;

    cout << "perimeter : " << rec.getPerimeter() << "   " << "area : " << rec.getArea() <<endl;
    /*Determine if it is a square*/
    if(rec.JudgeSquare() == 0)
    cout << "This is a square"<<endl;
    else
        cout << "This is a rectangle"<<endl;
    return 0;
}
