
using namespace std;
class Rectangle
{
public:
    Rectangle(double , double );
    void setlength(double);
    double getlength();
    void setwidth(double);
    double getwidth();
    double perimeter();
    double area();
private:
    double length;
    double width;
};
