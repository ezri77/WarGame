#include "stdafx.h"
#include "Uzi.h"


Uzi::Uzi(Point p):RegularWeapon(p,40,3)
{
}

Uzi::~Uzi()
{
}




void Uzi::toString()const
{
	std::cout << "its:Missile";
}

std::ostream& operator<<(std::ostream& os, const Uzi& m16)
{
	m16.toString();
	//os << "[" << p._x << " " << p._y << "]";
	return os;
}