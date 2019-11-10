#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
   double a,b;
   cin>>a>>b;
   Rectangle rectangle(a,b);
   double c=rectangle.perimeter();
   double d=rectangle.area();
   cout<<"the perimeter is:  "<<c<<endl;
   cout<<"the area is :  "<<d<<endl;
    return 0;
}
