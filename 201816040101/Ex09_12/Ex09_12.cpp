#include <iostream>
#include "Rectangle.h"
#include "Point.h"//to calculate the length and widthEx
using namespace std;

int main()
{
   double x1,y1,x2,y2,x3,y3,x4,y4;
   cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;//(x1,y1),(x2,y2),(x3,y3),(x4,y4)
   Point point(x1,y1,x2,y2,x3,y3,x4,y4);
   double a=point.Length(x1,x2);//x2-x1 is length
   double b=point.Width(y1,y4);//y4-y1 is width
   cout<<"the length is : "<<a<<endl;//output
   cout<<"the width is : "<<b<<endl;

   Rectangle rectangle(a,b);
   double l=rectangle.perimeter();
   double s=rectangle.area();
   cout<<"the perimeter is:  "<<l<<endl;//output
   cout<<"the area is :  "<<s<<endl;
   point.square();

    return 0;
}
