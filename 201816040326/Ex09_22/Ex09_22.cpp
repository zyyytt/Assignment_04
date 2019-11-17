#include <iostream>
#include<ctime>
#include"Time.h"
using namespace std;

int main()
{
    Time time1;
    time1.set_Time(12,58,59);
    cout<<setfill('0')<<setw(2)<<time1.get_hour()<<":"<<setw(2)<<time1.get_minute()<<":"<<setw(2)<<time1.get_second()<<endl;
    cout<<((time1.get_hour()==0||time1.get_hour()==12)?12:time1.get_hour()%12)<<":"<<setfill('0')<<setw(2)<<time1.get_minute()<<":"<<setw(2)<<time1.get_second()<<(hour<12?"AM":"PM")<<endl;
    time1.timetick();
    cout<<setfill('0')<<setw(2)<<time1.get_hour()<<":"<<setw(2)<<time1.get_minute()<<":"<<setw(2)<<time1.get_second()<<endl;
    cout<<((time1.get_hour()==0||time1.get_hour()==12)?12:time1.get_hour()%12)<<":"<<setfill('0')<<setw(2)<<time1.get_minute()<<":"<<setw(2)<<time1.get_second()<<(hour<12?"AM":"PM")<<endl;


}

