#include <iostream>
#include <string>
#include <cmath>
#include "Point.h"
#include "Line.h" 

using namespace std;

Point::Point()
{
	xAxis = 0;
	yAxis = 0;
}
Point::Point(float x, float y)
{
	xAxis = x;
	yAxis = y;
}

void Point::setXAxis(float x)
{
	xAxis = x;
}
void Point::setYAxis(float y)
{
	yAxis = y;
}
double Point::getXAxis()
{
	return xAxis;
}
double Point::getYAxis()
{
	return yAxis;
}
double Point::magnitude()
{
	return sqrt(pow(xAxis, 2) + pow(yAxis, 2));
}
void Point::print()
{
	cout << "(" << xAxis << "," << " " << yAxis << ")" << endl;
}
Point& Point::setXcasc(float x)
{
	xAxis = x;
	return *this;
}
Point& Point::setYcasc(float y)
{
	yAxis = y;
	return *this;
}

