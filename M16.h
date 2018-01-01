#pragma once
#include "RegularWeapon.h"

class M16:public RegularWeapon
{
public:
	M16(Point p);
	virtual ~M16();

	//print the data of the weapon
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const M16& hw);
};

