#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
    double a,b;
    cin>>a>>b;
    Rectangle z(a,b);
    cout << "the length is " << z.getlength()<<"\n"<< "the width is "<<z.getwidth() << endl;
    cout << "the perimeter is " << z.perimeter()<<"\n"<< "the area is "<<z.area() << endl;
    return 0;
}
