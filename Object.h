#pragma once

#include "Point.h"

class Object
{

protected:

	Point _location;

	//ctor, p-the point of the object.
	Object(Point p);

	//ctor, x-the x of the point that the object in,y-the y of the point that the object in
	Object(double x, double y);

public:

	//dtor's
	virtual ~Object();

	//implementation of oparation <<
	 friend std::ostream& operator<<(std::ostream& os, const Object& o);

	 // print the data of the object
	 virtual void toString()const = 0;
};

