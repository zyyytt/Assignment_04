#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED



#endif // TIME_H_INCLUDED
class Time
{
public:
    Time(int h,int m ,int s);
    Time(int t);
    void set_hour(int);
    void set_minute(int);
    void set_second(int);
    void set_Time(int,int,int);
    int get_hour();
    int get_minute();
    int get_second();
    void timetick();
    void changetime();
private:
    int hour;
    int minute;
    int second;
    int time;

};
