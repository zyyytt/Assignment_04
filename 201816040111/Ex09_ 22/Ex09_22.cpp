#include <iostream>
#include <stdexcept>
#include <ctime>
#include <string>
#include "Time.h"
using namespace std;
/*This is how I found local time on the website. https://zhidao.baidu.com/question/554881170.html */
struct
{
    int tm_sec; /* 秒 – 取值区间为[0,59] */
    int tm_min; /* 分 - 取值区间为[0,59] */
    int tm_hour; /* 时 - 取值区间为[0,23] */
    int tm_mday; /* 一个月中的日期 - 取值区间为[1,31] */
    int tm_mon; /* 月份（从一月开始，0代表一月） - 取值区间为[0,11] */
    int tm_year; /* 年份，其值等于实际年份减去1900 */
    int tm_wday; /* 星期 – 取值区间为[0,6]，其中0代表星期天，1代表星期一 */
    int tm_yday; /* 从每年1月1日开始的天数– 取值区间[0,365]，其中0代表1月1日 */
    int tm_isdst; /* 夏令时标识符，夏令时tm_isdst为正；不实行夏令时tm_isdst为0 */
} tm ;
int main()
{
    /*This is how I found local time on the website.https://zhidao.baidu.com/question/554881170.html and CSDN*/
    /*I don't quite understand how this code about lines of 8-19 and 24-28 are written.*/
    time_t now ;
    struct tm *tm_now ;
    time(&now) ;
    tm_now = localtime(&now) ;
    printf("now datetime: %d-%d-%d %d:%d:%d\n", tm_now->tm_year+1900, tm_now->tm_mon+1, tm_now->tm_mday, tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec) ;
    //Then initialize the local time in the constructor
    Time t1( tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec );
    ////////////////////////////////////////////////////////////
    cout<<"\n\n";
    cout<<"\n\n";
    cout<<"TotalSecond is : "<<t1.getTotalSecond()<<"s"<<endl;

    t1.timeTick();

    cout<<"\n\nNowTotalSecond is : "<<t1.getTotalSecond()<<"s"<<endl;

    return 0;
}
