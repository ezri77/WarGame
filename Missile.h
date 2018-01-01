#pragma once
#include "HeavyWeapon.h"

class Missile:HeavyWeapon
{
public:
	Missile(Point p);
	~Missile();

	//print the data of the weapons
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const Missile& hw);
};

