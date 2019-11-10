//Time.cpp

#ifndef TIME_H
#define TIME_H

#include<ctime>

//Time class definition
class Time
{
public:
    explicit Time (int = 0,int = 0, int = 0);   //default constructor
    explicit Time(time_t &t);    //use time function to construct

    void tick();  //function to increment of 1 second
    //set time by using time() function
    void setTimeByTimeFunc(time_t &t);   //set hour,minute,second
    void setHourByTimeFunc(/*time_t &t*/);   //set hour
    void setMinuteByTimeFunc(/*time_t &t*/); //set minute
    void setSecondByTimeFunc(/*time_t &t*/); //set second
    void setTotalSecondByTimeFunc(time_t &t);   //set total second

    //set functions
    void setTime(int,int,int);  //set hour,minute,second
    void setHour(int);  //set hour
    void setMinute(int);    //set minute
    void setSecond(int);    //set second

    //get functions
    unsigned int getHour() const;   //return hour
    unsigned int getMinute() const; //return minute
    unsigned int getSecond() const; //return second
    time_t getTotalSecond() const;    //return total second


    void printUniversal() const;    //output time in universal-time format
    void printStandard() const; //output time in standard-time format
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
    time_t totalsecond;
    };
#endif // TIME_H
