#include <iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle a(2,5);//Initialize an object
    a.check();
    cout<<"the length is:"<<a.get_length()<<"  "<<"the width is:"<<a.get_width()<<endl<<endl;
    cout<<"the area is:"<<a.area()<<endl<<"the perimeter is:"<<a.perimeter();
    return 0;
}
