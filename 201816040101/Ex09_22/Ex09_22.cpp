#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t1;
    Time t2(2);
    Time t3(21 , 34);
    Time t4(12 , 25 , 42);

    cout<<"Constructed with :\n\nt1:\n";

    t1.printUniversal();
    cout<<endl;
    t1.printStandard();

    cout<<"\n\nt2:\n";
    t2.printUniversal();
    cout<<endl;
    t2.printStandard();

    cout<<"\n\nt3:\n";
    t3.printUniversal();
    cout<<endl;
    t3.printStandard();

    cout<<"\n\nt4:\n";
    t4.printUniversal();
    cout<<endl;
    t4.printStandard();

    return 0;
}
