//Ex09_22.cpp

#include<iostream>
#include<stdexcept>
#include"Time.h"    //include definition of class Time from Time.h

using namespace std;

int main()
{
    time_t t;
    Time t1;    //all arguments default
    Time t2(2); //hour specified; minute and second defaulted
    Time t3(21,34); //hour and minute specified; second defaulted
    Time t4(12,25,42);  //hour, minute and second specified
    Time t5(t);     //use function time() and localtime() to initialize Time object
    Time t6(23,54,1);   //in order to demo function tick

    cout << "Constructed with:\n\nt1: all arguments defaulted\n";
    t1.printUniversal();
    cout << endl;
    t1.printStandard();
    cout << endl;
    cout << "\n\nt2: hour specified; minute and second defaulted\n";
    t2.printUniversal();
    cout << endl;
    t2.printStandard();
    cout << endl;
    cout << "\n\nt3: hour and minute specified; second defaulted\n";
    t3.printUniversal();
    cout << endl;
    t3.printStandard();
    cout << endl;
    cout << "\n\nt4: hour,minute and second specified\n";
    t4.printUniversal();
    cout << endl;
    t4.printStandard();
    cout << endl;
    cout << "\n\nt5: initialize t5 with the current time\n";
    t5.printUniversal();
    cout << endl;
    t5.printStandard();
    cout << endl;
    cout << "loop through the tick member function: " << endl;
    for(int i=1;i<400;i++)
    {
        t6.tick();
        t6.printStandard();
        cout << endl;
    }

}
