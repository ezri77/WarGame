#include "Solid.h"

Solid::Solid():Object(Point (0,0)),_length(1),_width(1),_name("rock")
{
}

Solid::Solid(Point location, double x, double y, std::string name):Object(location), _width(y),_length(x),_name(name){}

Solid::~Solid()
{
}

const  Point& Solid::getLocation()const
{		 
	return _location;
}

const double Solid::getWidth() const
{
	return _width;
}

const double Solid::getLength() const
{
	return _length;
}

const std::string Solid::getName()const
{
	return _name;
}

/*
const Point & Solid::passThrough(Point source, Point destination) const
{
	//??????

}*/

void Solid::toString()const
{
	std::cout << "There is a " << /*getName() <<*/ " in " << getLocation()
		<< " with width:" << getWidth() << " and length:" << getLength();
}

std::ostream & operator<<(std::ostream & os, const Solid & s)
{
	s.toString();
	return os;
}
