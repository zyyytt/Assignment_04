#include <iostream>
#include"Time.h"
using namespace std;

Time::Time(int h,int m ,int s)
{
    set_Time(h,m,s);
}

Time::Time(int t)
{
    time = t;
}

void Time::set_Time(int h,int m,int s)
{
    set_hour(h);
    set_minute(m);
    set_second(s);
}

void Time::set_hour(int h)
{
    if(h<0||h>23)
        throw invalid_argument("hour must be in 0-23");
    else
        hour = h;
}

void Time::set_minute(int m)
{
    if(m<0||m>59)
        throw invalid_argument("minute must be in 0-59");
    else
        minute = m;
}

void Time::set_second(int s)
{
    if(s<0||s>59)
        throw invalid_argument("second must be in 0-59");
    else
        second = s;
}

int Time::get_hour()
{
    return hour;
}

int Time::get_minute()
{
    return minute;
}

int Time::get_second()
{
    return second;
}

void Time::timetick()
{
    for(int i=0;i<10;i++)
    {
        time++;
        changetime();

    }
}

void Time::changetime()
{
    int h,m,s;
    int j;
    h=time/3600;
    j=time%3600;
    m=j/60;
    j=j%60;
    s=j;
    set_hour(h);
    set_minute(m);
    set_second(s);
}
