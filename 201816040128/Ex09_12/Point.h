#ifndef POINT_H
#define POINT_H

class Point{
public:
	Point(double = 1, double = 1);
	void setPointx(double);
	void setPointy(double);
	double getPointy();
	double getPointx();
private:
	double x;
	double y;
};
#endif
