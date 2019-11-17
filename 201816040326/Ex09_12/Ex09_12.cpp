#include <iostream>
#include"Point.h"
#include"Rectangle.h"
using namespace std;

int main()
{
    Rectangle m(1,2,1,3,2,2,2,3);
    cout<<"length:"<<m.get_length()<<endl;
    cout<<"width:"<<m.get_width()<<endl;
    cout<<"area:"<<m.get_area()<<endl;
    cout<<"perimter:"<<m.get_perimter()<<endl;
}
