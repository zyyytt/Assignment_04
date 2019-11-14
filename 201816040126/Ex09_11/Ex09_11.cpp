#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle R;
    /* Instantiate an object of type Rectangle */

    double a;

    cout << "请输入长方形的长：";
    cin >> a;
    R.setLength(a);

    cout << "请输入长方形的宽：";
    cin >> a;
    R.setWidth(a);

    cout<<"\n长方形的长：" << R.getLength() << endl
    << "长方形的宽：" << R.getWidth() << endl
    << "长方形的周长：" << R.Perimeter()<<  endl
    << "长方形的面积：" << R.Area() << endl;

}
