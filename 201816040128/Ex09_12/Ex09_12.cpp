#include<iostream>
#include<stdexcept>
#include"Point.h"
#include"Rectangle.h"
using namespace std;

int main()
{
		double a, b;
		cout << "请输入第一个坐标\n";
		cin >> a;
		cin >> b;
		Point point1(a, b);
		cout << "请输入第二个坐标\n";
		cin >> a;
		cin >> b;
		Point point2(a, b);
		cout << "请输入第三个坐标\n";
		cin >> a;
		cin >> b;
		Point point3(a, b);
		cout << "请输入第四个坐标\n";
		cin >> a;
		cin >> b;
		Point point4(a, b);
		Rectangle rectangle(point1, point2, point3, point4);
		if (rectangle.judgeRectangle())
		{
			cout << "This is a rectangle\n";
			rectangle.lengthWidth();
			rectangle.calculateperimeter();
			rectangle.calculatearea();
		}
		else
		{
			cout << "This is not a rectangle";
			return 0;
		}
}
