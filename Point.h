#include <iostream>
#include <cmath>
#include <iomanip>
#ifndef POINT_H
#define POINT_H

using namespace std;

class Point
{
public:
	Point();
	Point(float, float);
	void setXAxis(float);
	double getXAxis();
	void setYAxis(float);
	double getYAxis();
	void print();
	double magnitude();
	Point& setXcasc(float);
	Point& setYcasc(float);

	float xAxis;
	float yAxis;	

};
#endif
