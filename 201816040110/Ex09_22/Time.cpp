#include <iostream>
using namespace std;

#include "ctime.h"
Time::Time( int m, int d, int y )//时分秒
{
    settime( m, d, y );
}
void Time::settime( int m, int d,int y)
{
     sethour ( m );
     setminute ( d );
     setsecond( y );
}
void Time::setsecond( int y )
{
    if(y>=0&&y<60)
    {
        second=y;
    }
}
void Time::setminute( int d )
{
    if(d>=0&&d<60)
    {
        minute=d;
    }
}
void Time::sethour( int m )
{
    if(m>=0&&m<24)
    {
        hour=m;
    }
}
void Time::tick()
{
    if(second<59)
    {
        second=second+1;
    }
    else
    {
        second = 0;
        if(minute<59)
        {
            minute=minute+1;
        }
        else
        {
            minute=0;
            {
                if(hour<23)
                {
                    hour=hour+1;
                }
                else
                {
                    hour=0;
                }
            }
        }
    }
}
void Time::printf()
{
    cout << hour << '-' << minute << '-' << second << '\n';
}
void Time::setcountsecond(int h, int m, int s )
{
    countsecond=h*3600+m*60+s;
}
int Time::getcountsecond()
{
    return countsecond;
}





