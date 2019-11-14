#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
#include <iostream>
#include <ctime>

#endif // TIME_H_INCLUDED

class Time
{
public:
    explicit Time( int = 0 , int = 0 , int = 0);
    Time &setTime( int , int  , int  );//function to set time
    Time &setHour ( int  );//function to set hour
    Time &setMinute( int  );//function to set minute
    Time &setSecond( int  );//function to set second

    int getHour();//function to get hour
    int getMinute();//function to get minute
    int getSecond();//function to get second
    void displayUniversal();//function to show universal time
    void displayStandard();//function to show standard time
    void Timetick();//function to add 1 second

    int TotalSeconds();//function to calculate seconds.

private:
    int hour;
    int minute;
    int second;
    int totalseconds;
};

