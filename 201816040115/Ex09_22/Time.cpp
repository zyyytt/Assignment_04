//Time.cpp

#include<iostream>
#include<iomanip>
#include<stdexcept>
#include"Time.h"

using namespace std;

//Time constructor initializes  using time() function
Time::Time(time_t &t)
{
    setTimeByTimeFunc(t);
}

void Time::setTimeByTimeFunc(time_t &t)  //set hour,minute,second
{
    setTotalSecondByTimeFunc(t);
    setHourByTimeFunc(/*t*/);
    setMinuteByTimeFunc(/*t*/);
    setSecondByTimeFunc(/*t*/);

}

void Time::tick() //function to increment of 1 second
{
    if(this->getSecond()<59)    //if second<59,second add 1
    {
        this->setSecond(this->getSecond()+1);
    }
    else    //second=59
    {
        if(this->getMinute()<59)    //if minute<59,minute add 1 and second set 0 again
        {
                this->setMinute(this->getMinute()+1);
                this->setSecond(0);
        }
        else    //minute=59
        {
            if(this->getSecond()>=59)   //at the same time second=59
            {
                this->setSecond(0); //set second to 0
                this->setMinute(0); //set minute to 0
                if(this->getHour()<23)  //if hour<23
                {
                    this->setHour(this->getHour()+1);   //hour add 1
                }
                else    //hour=23
                {
                    this->setHour(0);   //hour set 0,next day is coming
                }
            }
        }
    }

}
void Time::setHourByTimeFunc(/*time_t &t*/)   //set hour
{
    struct tm *tm_now;
    //time(&t);
    tm_now=localtime(&/*t*/totalsecond);
    hour=tm_now->tm_hour;
}
void Time::setMinuteByTimeFunc(/*time_t &t*/) //set minute
{
    struct tm *tm_now;
    //time(&t);
    tm_now=localtime(&/*t*/totalsecond);
    minute=tm_now->tm_min;
}
void Time::setSecondByTimeFunc(/*time_t &t*/)//set second
{
    struct tm *tm_now;
    //time(&t);
    tm_now=localtime(&/*t*/totalsecond);
    second=tm_now->tm_sec;
}
//Time constructor initializes each data member
Time::Time(int hour, int minute, int second)
{
    setTime(hour,minute,second);
}//end Time constructor

//set new Time value using universal time
void Time::setTime(int h,int m,int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}//end function setTime

//set hour value
void Time::setHour(int h)
{
    if(h>=0&&h<24)
    {
        hour=h;
    }
    else
    {
        throw invalid_argument("hour must be 0-23");
    }
}//end function setHour

//set minute value
void Time::setMinute(int m)
{
    if(m>=0&&m<60)
        minute=m;
    else
        throw invalid_argument("minute must be 0-59");
}//end function setMinute

//set second value
void Time::setSecond(int s)
{
    if(s>=0&&s<60)
    {
        second=s;
    }
    else
    {
        throw invalid_argument("second must be 0-59");
    }
} //end function setSecond

//function to set total second
void Time::setTotalSecondByTimeFunc(time_t &t)
{
    totalsecond=time(&t);
}

//return total second
time_t Time::getTotalSecond() const
{
    return totalsecond;
}
//return hour value
unsigned int Time::getHour() const
{
    return hour;
}

//return minute value
unsigned int Time::getMinute() const
{
    return minute;
}

//return second value
unsigned int Time::getSecond() const
{
    return second;
}

//print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

//print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const
{
    cout << ((getHour()==0||getHour()==12) ? 12 :getHour()%12)
        << ":" << setfill('0') << setw(2) << getMinute()
        << ":" << setw(2) << getSecond() << (hour<12 ? "AM" : "PM");
}
