#include <iostream>
using namespace std;

#include "ctime.h"
int main()
{
    int m,s,h,p,i,j;
    cin>>h>>m>>s;
    Time a(h,m,s);
    cout<<"1.hour-minute-second\n2.seconds from midnight"<<endl;
    cin>>j;
    if(j==1)
    {
    cin>>p;
    for( i=0; i<p ; i++)
    {
        a.tick();
        a.printf();
    }
    }
    else if (j==2)
    {
        a.setcountsecond(h , m , s);
        cout<<a.getcountsecond()<<endl;
    }
    return 0;
}
