#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle a(8.0,5.0);
    cout <<"The length is "<<a.getLength()<<endl;
    cout <<"The width is "<< a.getWidth() <<endl;
    cout <<"The perimeter is " << a.perimeter()<<endl;
    cout <<"The area is "<<a.area()<<endl;

}
