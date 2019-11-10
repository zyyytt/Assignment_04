#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED
/*Calculate the total number of seconds since midnight by the time, minute, and second returned*/
class Time
{
public:
    explicit Time( int = 0, int = 0,int = 0);
    void setTime( int , int , int );
    void setHour( int );
    void setMinute( int );
    void setSecond( int );

    unsigned int getHour() const;
    unsigned int getMinute() const;
    unsigned int getSecond() const;

    void timeTick();//The function of tick can walk the time
    unsigned int getTotalSecond();// The function of getTotalSecond can calculate the total number of seconds since midnight
private:
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};

#endif // TIME_H_INCLUDED
