#include <stdexcept>
#include <iomanip>
#include <iostream>
#include "Time.h"

using namespace std;

Time::Time(int h,int m,int s)
{
     setTime(h ,m , s);
}
void Time::setTime(int h, int m, int s)
{
    second=0;
    setHour(h);
    setMinute(m);
    setSecond(s);
}
void Time::setHour(int h)
{
    second+= h*3600;
}
int Time::getHour()
{
    return second/3600;
}
void Time::setMinute(int m)
{
    second+=m*60;
}
int Time::getMinute()
{
    return second%360/60;
}
void Time::setSecond(int s)
{
    second+=s;
}
int Time::getSecond()
{
    return second%3600%60;
}
void Time:: printUniversal()
{
    cout<<setfill('0')<<setw(2)<<getHour()<<":"
       <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond();
}
void Time:: printStandard()
{
    cout<<setfill('0')<<setw(2)<<((getHour()==0||getHour()==12)?12 :getHour()%12)<<":"
       <<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()
       <<(getHour()<12?"AM":"PM");
}
