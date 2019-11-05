using namespace std;

class Rectangle
{
private:
    double length;//长度
    double width;//宽度
    
public:
    Rectangle(double len=1, double wide=1);//构造函数
    void setLength(double);//设置长度
    void setWidth(double);//设置宽度
    double getLength();//获取长度
    double getWidth();//获取宽度
    double perimeter();//计算周长
    double area();//计算面积

};
