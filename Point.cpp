
#include "Point.h"


Point::Point():_x(0),_y(0)
{
}

Point::Point(double x, double y):_x(x),_y(y){}


Point::~Point()
{
}


double Point::getX()
{
	return _x;
}
double Point::getY()
{
	return _y;
}

/*
const Point& Point::getPoint()const
{
	  return *this; 
}
*/

void Point::setPoint(double x, double y)
{
	_x = x;
	_y = y;
}

void Point::setPoint(Point p)
{
	_x = p.getX();
	_y = p.getY();
}

void Point::setX(double x)
{
	_x = x;
}
void Point::setY(double y)
{
	_y = y;
}

void Point::toString() const
{
	std::cout << "[" << _x << " " << _y << "]";
}



 std::ostream & operator<<(std::ostream & os, const Point & p)
 {
	 os << "[" << p._x << " " << p._y << "]";
	 return os;
 }
