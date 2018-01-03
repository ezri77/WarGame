#ifndef SOLID
#define SOLID
#include "Object.h"
#include <iostream>

class Solid:public Object 
{
private:
	const std::string _name;
	const double _width;
	const double _length;

public:
	//defulte ctor. put at point [0 0] Obj at  width=1, length=1
	Solid();

	//ctor, location-the point of the left-down corner of the obj, w-  width, l-length
	Solid(Point location, double l, double w,std::string name);
	
	//dtor's
	~Solid();

	//geters
	//return ref to the location(left-down corner) of the obj(return Point&)
	const  Point& getLocation()const;
	//return the width
	const double getWidth()const;
	//return the length
	const double getLength()const;
	//return (string) the name of the obj
	const std::string getName()const;
	
	//TODO: check if the  the path of source to destination pass Through him, if yes return the point of the intersection
	//else return destination
	//const Point& passThrough(Point source,Point destination)const;


	//print data of solid
	void virtual toString()const;

	//oparation <<
	 friend std::ostream& operator<<(std::ostream& os, const Solid& s) ;

	


};

#endif