#include <iostream>
#include <ctime>
#include <iomanip>
#include <stdexcept>
#include "Time.h"

using namespace std;

Time::Time( int hour , int minute , int second )//the function to set time
{
    setTime( hour , minute , second );
}

/*Time::Time()
{
    const time_t currentime = time( 0 );
    const tm *localTime = localtime( &currentTime );
    setTime( localTime->tm_hour,
            localTime->tm_min,
            localTime->tm_sec);
}*/
//I write this function Time,but I can't let it run correctly.

Time &Time::setTime( int h, int m , int s )
{
    setHour( h );
    setMinute( m );
    setSecond( s );

    return *this;
}

Time &Time::setHour ( int h )//function to set hour
{
    if( h >= 0 && h < 24)
        hour = h;
    else//the wrong input of hour.
        cout << "The hour is wrong!" << endl;

    return *this;
}

Time &Time::setMinute( int m )//function to set minute
{
    if( m >= 0 && m < 60 )
        minute = m;
    else//the wrong input of hour.
        cout << "The minute is wrong!" << endl;

    return *this;
}

Time &Time::setSecond( int s)//function to set second
{
    if( s >= 0 && s < 60)
        second = s;
    else
        cout << "The second is wrong!" << endl;

    return *this;
}

int Time::getHour()//function to get hour
{
    return hour;
}

int Time::getMinute()//function to get minute
{
    return minute;
}

int Time::getSecond()//function to get second
{
    return second;
}

void Time::displayUniversal()//function to display universal time
{
    cout << setfill( '0' ) << setw( 2 ) << hour << ":"
    << setw( 2 ) << minute << ":" << setw(2) <<second;
}

void Time::displayStandard()//function to display standard time
{
    cout << (( hour == 0 || hour == 12) ? 12: hour % 12 )
    << ":" << setfill( '0' ) << setw( 2 ) << minute
    << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM");
}

void Time::Timetick()//function to add 1 minute
{
    if( 0 <= second && second < 59)//the second >=0 and < 59
    {
        second = second + 1;
    }
    else if( second == 59 )//the second is 59
    {
        if( 0 <= minute && minute < 59 )//minute >= 0 and minute <59
        {
            minute = minute + 1;
            second = 0;
        }
        else if ( minute == 59 )//minute is 59
        {
            hour = hour + 1;
            minute = 0;
            second = 0;
        }
    }
    cout << (( hour == 0 || hour == 12) ? 12: hour % 12 )
    << ":" << setfill( '0' ) << setw( 2 ) << minute
    << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM");
}

int Time::TotalSeconds()//calculate the total seconds from the midnight to the current time.
{
    time_t totalseconds;//this function comes from ctime.h
    totalseconds = time(NULL);

    return totalseconds;
}
