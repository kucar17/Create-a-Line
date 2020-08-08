#include <iostream>
#include <string>
#include <cmath>
#include "Point.h"
#include "Line.h"

const double PI = 3.14159265359;
using namespace std;


Line::Line()
{
	point1.xAxis = 0;
	point1.yAxis = 0;
	point2.xAxis = 0;
	point2.yAxis = 0;
	slope = 0;
	constant = 0;
	angle = 0;
	EqCoeffients[2] = { 0 };
}

Line::Line(Point a, Point b)
{
	point1 = a;
	point2 = b;
	slope = (point1.yAxis - point2.yAxis) / (point1.xAxis - point2.xAxis);
	constant = point1.yAxis - (slope * point1.xAxis);
}

void Line::print()
{
	cout << "Two points representing the line are :" << endl;
	point1.print();
	point2.print();
}

void Line::lineEqCoeffients(double c[2])
{
	c[0] = slope;
	c[1] = constant;
}

double Line::anglewXaxes()
{
	float degree = 180 * (atan(slope)) / PI;
	return degree;
}

void Line::itersectionPointW(Line line1, Point point1)
{
	point1.xAxis = (constant - line1.constant) / (line1.slope - slope);
	point1.yAxis = (constant * line1.slope - slope * line1.constant) / (line1.slope - slope);
	point1.print();
}

Line& Line::setPoint1casc(Point point_1)
{
	point1 = point_1;
	return *this;
}

Line& Line::setPoint2casc(Point point_2)
{
	point2 = point_2;
	return *this;
}