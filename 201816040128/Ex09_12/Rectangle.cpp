#include<iostream>
#include<stdexcept>
#include"Point.h"
#include"Rectangle.h"
using namespace std;

Rectangle::Rectangle( Point &poin1, Point &poin2, Point &poin3, Point &poin4)
	:point1(poin1),
	 point2(poin2),
	 point3(poin3),
	 point4(poin4)
{

}

//判断是否为长方形
bool Rectangle::judgeRectangle()
{
	double a, b, c;
	if (point1.getPointx() == point2.getPointx() && point3.getPointx()== point4.getPointx())
	{
		if (point2.getPointy() - point1.getPointy() == point4.getPointy() - point3.getPointy()&& point2.getPointy() - point1.getPointy()!=0&& point4.getPointy() - point3.getPointy()!=0)   //为什么poin1.y不行？
		{
			 a = (point2.getPointy() - point1.getPointy()) * (point2.getPointy() - point1.getPointy()) + (point2.getPointx() - point1.getPointx()) * (point2.getPointx() - point1.getPointx());
			 b = (point3.getPointy() - point1.getPointy()) * (point3.getPointy() - point1.getPointy()) + (point3.getPointx() - point1.getPointx()) * (point3.getPointx() - point1.getPointx());
			 c = (point2.getPointy() - point3.getPointy()) * (point2.getPointy() - point3.getPointy()) + (point2.getPointx() - point3.getPointx()) * (point2.getPointx() - point3.getPointx());

			if(a+b==c)
				return true;
		}
		if (point2.getPointy() - point1.getPointy() == point3.getPointy() - point4.getPointy() && point2.getPointy() - point1.getPointy() != 0 && point3.getPointy() - point4.getPointy() != 0)   //为什么poin1.y不行？
		{
			 a = (point2.getPointy() - point1.getPointy()) * (point2.getPointy() - point1.getPointy()) + (point2.getPointx() - point1.getPointx()) * (point2.getPointx() - point1.getPointx());
			 b = (point4.getPointy() - point1.getPointy()) * (point4.getPointy() - point1.getPointy()) + (point4.getPointx() - point1.getPointx()) * (point4.getPointx() - point1.getPointx());
			 c = (point2.getPointy() - point4.getPointy()) * (point2.getPointy() - point4.getPointy()) + (point2.getPointx() - point4.getPointx()) * (point2.getPointx() - point4.getPointx());
			if (a + b == c)
				return true;
		}
	}

	if (point1.getPointx() == point3.getPointx() && point2.getPointx() == point4.getPointx())
	{
		if (point3.getPointy() - point1.getPointy() == point4.getPointy() - point2.getPointy() && point3.getPointy() - point1.getPointy() != 0 && point4.getPointy() - point2.getPointy() != 0)
		{
			 a = (point2.getPointy() - point1.getPointy()) * (point2.getPointy() - point1.getPointy()) + (point2.getPointx() - point1.getPointx()) * (point2.getPointx() - point1.getPointx());
			 b = (point3.getPointy() - point1.getPointy()) * (point3.getPointy() - point1.getPointy()) + (point3.getPointx() - point1.getPointx()) * (point3.getPointx() - point1.getPointx());
			 c = (point2.getPointy() - point3.getPointy()) * (point2.getPointy() - point3.getPointy()) + (point2.getPointx() - point3.getPointx()) * (point2.getPointx() - point3.getPointx());

			if (a + b == c)
				return true;
		}
		if (point3.getPointy() - point1.getPointy() == point2.getPointy() - point4.getPointy() && point3.getPointy() - point1.getPointy() != 0 && point2.getPointy() - point4.getPointy() != 0)
		{
			a = (point3.getPointy() - point1.getPointy()) * (point3.getPointy() - point1.getPointy()) + (point3.getPointx() - point1.getPointx()) * (point3.getPointx() - point1.getPointx());
			 b = (point4.getPointy() - point1.getPointy()) * (point4.getPointy() - point1.getPointy()) + (point4.getPointx() - point1.getPointx()) * (point4.getPointx() - point1.getPointx());
			 c = (point3.getPointy() - point4.getPointy()) * (point3.getPointy() - point4.getPointy()) + (point3.getPointx() - point4.getPointx()) * (point3.getPointx() - point4.getPointx());
			if (a + b == c)
				return true;
		}
	}

	if (point1.getPointx() == point4.getPointx() && point3.getPointx() == point2.getPointx())
	{
		if (point4.getPointy() - point1.getPointy() == point3.getPointy() - point2.getPointy() && point4.getPointy() - point1.getPointy() != 0 && point3.getPointy() - point2.getPointy() != 0)
		{
			 a = (point2.getPointy() - point1.getPointy()) * (point2.getPointy() - point1.getPointy()) + (point2.getPointx() - point1.getPointx()) * (point2.getPointx() - point1.getPointx());
			 b = (point4.getPointy() - point1.getPointy()) * (point4.getPointy() - point1.getPointy()) + (point4.getPointx() - point1.getPointx()) * (point4.getPointx() - point1.getPointx());
			 c = (point2.getPointy() - point4.getPointy()) * (point2.getPointy() - point4.getPointy()) + (point2.getPointx() - point4.getPointx()) * (point2.getPointx() - point4.getPointx());

			if (a + b == c)
				return true;
		}
		if (point4.getPointy() - point1.getPointy() == point2.getPointy() - point3.getPointy() && point4.getPointy() - point1.getPointy() != 0 && point2.getPointy() - point3.getPointy() != 0)
		{
			 a = (point2.getPointy() - point1.getPointy()) * (point2.getPointy() - point1.getPointy()) + (point2.getPointx() - point1.getPointx()) * (point2.getPointx() - point1.getPointx());
			 b = (point4.getPointy() - point1.getPointy()) * (point4.getPointy() - point1.getPointy()) + (point4.getPointx() - point1.getPointx()) * (point4.getPointx() - point1.getPointx());
			 c = (point2.getPointy() - point4.getPointy()) * (point2.getPointy() - point4.getPointy()) + (point2.getPointx() - point4.getPointx()) * (point2.getPointx() - point4.getPointx());
			if (a + b == c)
				return true;
		}
	}
	return false;
}

//计算长度和宽度
void  Rectangle::lengthWidth()
{
	if (point1.getPointx() == point2.getPointx() && point3.getPointx() == point4.getPointx())
	{
		if (point1.getPointy() - point2.getPointy()>0)
		{
			(*this).length = point1.getPointy() - point2.getPointy();
		}
		else
		{
			(*this).length = point2.getPointy() - point1.getPointy();
		}
		if (point1.getPointy() == point3.getPointy() && point2.getPointy() == point4.getPointy())
		{
			if (point1.getPointx() - point3.getPointx() > 0)
			{
				(*this).width = point1.getPointx() - point3.getPointx();
			}
			else
			{
				(*this).width = point3.getPointx() - point1.getPointx();
			}
		}
	}
	
	
	
	if (point1.getPointx() == point3.getPointx() && point2.getPointx() == point4.getPointx())
	{
		if (point1.getPointy() - point3.getPointy() > 0)
		{
			(*this).length = point1.getPointy() - point3.getPointy();
		}
		else
		{
			(*this).length = point3.getPointy() - point1.getPointy();
		}
		if (point1.getPointy() == point2.getPointy() && point3.getPointy() == point4.getPointy())
		{
			if (point1.getPointx() - point2.getPointx() > 0)
			{
				(*this).width = point1.getPointx() - point2.getPointx();
			}
			else
			{
				(*this).width = point2.getPointx() - point1.getPointx();
			}
		}
	}
	
	if (point1.getPointx() == point4.getPointx() && point3.getPointx() == point2.getPointx())
	{
		if (point1.getPointy() - point4.getPointy() > 0)
		{
			(*this).length = point1.getPointy() - point4.getPointy();
		}
		else
		{
			(*this).length = point4.getPointy() - point1.getPointy();
		}
		if (point1.getPointy() == point2.getPointy() && point3.getPointy() == point4.getPointy())
		{
			if (point1.getPointx() - point2.getPointx() > 0)
			{
				(*this).width = point1.getPointx() - point2.getPointx();
			}
			else
			{
				(*this).width = point2.getPointx() - point1.getPointx();
			}
		}
	}

	if ((*this).width < (*this).length)
	{
		cout << "Length is " << (*this).length<<"\n";
		cout << "Width is " << (*this).width;
	}
	else
	{
		cout << "Length is " << (*this).width<<"\n";
		cout << "Width is " << (*this).length;
	}
}

//j计算周长
void  Rectangle::calculateperimeter()
{
	cout << "perimeter is " << 2 * (this->length + this->width)<<"\n";
}

//计算面积
void  Rectangle::calculatearea()
{
	cout << "area is " << (this->length) * (this->width) << "\n";
}
