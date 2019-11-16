#ifndef RECTANGLE_H
#define RECTANGLE_H
#include"Point.h"

class Rectangle{
public:
	Rectangle( Point & ,  Point &,  Point &,  Point &);
	void lengthWidth();
	bool judgeRectangle();
	void calculateperimeter();
	void calculatearea();
private:
	double length;
	double width;
	double perimeter;
	double area;
	 Point point1;
	 Point point2;
	 Point point3;
	 Point point4;
	
	
};
#endif

