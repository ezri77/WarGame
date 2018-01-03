#include "stdafx.h"
#include "RegularWeapon.h"


RegularWeapon::RegularWeapon(Point p,int power, int numOfShots): Weapon(p, power, numOfShots)
{
}


RegularWeapon::~RegularWeapon()
{
}


void RegularWeapon::toString()const
{
	std::cout << "it is a regular weapon";
}

std::ostream& operator<<(std::ostream& os, const RegularWeapon& hw)
{
	hw.toString();
	//os << "[" << p._x << " " << p._y << "]";
	return os;
}

bool RegularWeapon::IsHeavy(){
	return false;
}
