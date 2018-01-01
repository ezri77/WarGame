#include "stdafx.h"
#include "HeavyWeapon.h"


HeavyWeapon::HeavyWeapon(Point p, int power, int numOfShots):Weapon(p, power, numOfShots)
{
}


HeavyWeapon::~HeavyWeapon()
{
}


//print the data of the weapons
 void HeavyWeapon::toString()const
{
	std::cout << "it is a heavy weapon";
}

// implement oof operator <<
std::ostream& operator<<(std::ostream& os, const HeavyWeapon& hw)
{
	hw.toString();
	//os << "[" << p._x << " " << p._y << "]";
	return os;
}
