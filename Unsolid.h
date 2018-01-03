#ifndef SOLID
#define SOLID
#include "Object.h"
#include <iostream>

class Unsolid:public Object
{
protected:
	//ctor
	Unsolid(Point p);
	
public:
	//dtor
	virtual ~Unsolid();
	//abstract function to print 
	virtual void toString()const = 0;
	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

#endif