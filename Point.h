#pragma once
#include <iostream>
class Point
{

private:
	double _x;
	double _y;

public:
	//def' ctor
	Point();

	// ctor
	Point(double x, double y);

	//dtor
	~Point();

	//geters
	//return x
	double getX();
	//return y
	double getY();

	//return point obj (this)
	//const Point& getPoint()const;
	
	//seters
	void setPoint(Point p);
	void setPoint(double x, double y);
	void setX(double x);
	void setY(double y);

	friend std::ostream& operator<<(std::ostream& os, const Point& p);
	


	//print the data of the point
	void toString()const;
};

