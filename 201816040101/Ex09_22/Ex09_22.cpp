#include <iostream>
#include "Time.h"
#include <time.h>
using namespace std;

int main()
{
    Time t1;

   time_t rawtime;
   struct tm *info;
   char buffer[80];

   time( &rawtime );

   info = localtime( &rawtime );
   printf("当前的本地时间和日期：%s", asctime(info));
   t1.setHour(info->tm_hour);
   t1.setMinute(info->tm_min);
   t1.setSecond(info->tm_sec);


    cout<<"Constructed with :\n\nt1:\n";

    t1.printUniversal();
    cout<<endl;
    t1.printStandard();



    return 0;
}
