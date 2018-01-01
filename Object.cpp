#include "stdafx.h"
#include "Object.h"


Object::Object(Point p):_location(p)
{
}


Object::Object(double x, double y):_location(x,y){}


Object::~Object()
{
}

Point& Object::getLocation()
{
	return _location;
}

const Point& Object::getLocation()const
{
	return _location;
}

std::ostream & operator<<(std::ostream & os, const Object & o)
{
	o.toString();
	return os;
}
