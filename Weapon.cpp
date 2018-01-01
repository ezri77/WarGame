#include "stdafx.h"
#include "Weapon.h"


Weapon::Weapon(Point p, int power, int numOfShots):Unsolid(p),_power(power),_numOfShots(numOfShots)
{
}

Weapon::~Weapon()
{
}

int Weapon::getPower()const
{
	return _power;
}
int Weapon::getNumOfShots()const
{
	return _numOfShots;
}

//seters
void Weapon::setLocation(Point& p)
{
	_location.setPoint(p);
}


void Weapon::toString()const
{
	std::cout << "loaction:" << _location << " power:" << _power << " sum of shots:" << _numOfShots;
}

 std::ostream& operator<<(std::ostream& os, const Weapon& w)
{
	 w.toString();
	 //os << "[" << p._x << " " << p._y << "]";
	 return os;
}