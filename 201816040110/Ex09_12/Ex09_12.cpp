#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
    double a,b,c,d,e,f,g,h;
    int x;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    Rectangle z(a,b,c,d,e,f,g,h);
    z.setdate(a,b,c,d,e,f,g,h);
    x=z.check1();
    if(x==0)
    {
        cout<<"Error"<<endl;
    }
    else if(x==1)
    {
        cout<<"the length is "<<z.getlength()<<"\n"<<"the width is "<<z.getwidth()<<endl;
        cout<<"the perimeter is "<<z.perimeter()<<"\n"<<"the area is "<<z.area()<<endl;
        z.check2();
    }
    return 0;
}
