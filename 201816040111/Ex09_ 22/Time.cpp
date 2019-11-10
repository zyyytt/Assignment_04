#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "Time.h"
using namespace std;

Time::Time(int hour,int minute,int second)
{
    setTime(hour,minute, second);
}

void Time::setTime(int h, int m, int s )
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}
/*Determine if the hour is within reasonable limits*/
void Time::setHour(int h)
{
    if ( h >= 0 && h < 24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
}
/*Determine if the minute is within reasonable limits*/
void Time::setMinute(int m)
{
    if ( m >= 0 && m < 60)
        minute = m ;
    else
        throw invalid_argument("minute must be 0-59");
}
/*Determine if the second is within reasonable limits*/
void Time::setSecond(int s)
{
    if ( s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");
}

unsigned int Time::getHour() const
{
    return hour;
}

unsigned int Time::getMinute() const
{
    return minute;
}

unsigned int Time::getSecond() const
{
    return second;
}
/*Progressive seconds in the loop*/
void Time::timeTick()
{
    for(int i=0; i<100; i++)
    {

        second ++ ;
        if (second == 60)//If the number of seconds is 60, the number of minutes plus one.
        {
            second = 0;
            minute ++ ;
        }
        if (minute == 60)//If the number of minutes is 60, the number of hours plus one.
        {
            minute = 0;
            hour ++ ;
        }

    /*Output standard time*/
        cout <<  ( (getHour() == 0 || getHour()==12) ? 12 : getHour() % 12)
             << ":" << setfill('0') << setw(2) << getMinute()
             << ":" <<setw(2) <<getSecond() << ( hour < 12 ? "AM" : "PM" );
        cout <<endl;
    }

}
/*Calculate the total number of seconds since midnight*/
unsigned int Time::getTotalSecond()
{
    return hour * 3600 + minute * 60 + second ;
}
