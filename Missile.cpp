#include "stdafx.h"
#include "Missile.h"


Missile::Missile(Point p) :HeavyWeapon(p, 100, 1)
{
}


Missile::~Missile()
{
}

void Missile::toString()const
{
	std::cout << "its:Missile";
}

std::ostream& operator<<(std::ostream& os, const Missile& m16)
{
	m16.toString();
	//os << "[" << p._x << " " << p._y << "]";
	return os;
}