class Time
{
public:
    explicit Time ( int=0 , int=0, int=0);
    void settime(int , int ,int );
    void printf();
    void setsecond( int );
    void setminute ( int );
    void sethour ( int );
    int getsecond();
    int getminute();
    int gethour();
    void tick();
    void setcountsecond(int , int , int);
    int getcountsecond();
private:
    int second;
    int minute;
    int hour;
    int countsecond;
};

