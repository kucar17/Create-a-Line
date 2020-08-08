#include <cmath>
#include "Point.h"
#ifndef LINE_H
#define LINE_H
using namespace std;

class Line : public Point
{
public:
	Line();
	Line(Point, Point);
	void print();
	void lineEqCoeffients(double[2]);
	void itersectionPointW(Line, Point);
	double anglewXaxes();
	double constant;
	Line& setPoint1casc(Point);
	Line& setPoint2casc(Point);

private:
	Point point1;
	Point point2;
	double slope;
	double EqCoeffients[2];
	double angle;
	
};
#endif