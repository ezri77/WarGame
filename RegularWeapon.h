#ifndef  REG_WEPOEN
#define  REG_WEPOEN
#include "Weapon.h"

class RegularWeapon :public Weapon
{
protected:
	RegularWeapon(Point p, int power, int numOfShots);
	virtual ~RegularWeapon();

public:

	//print the data of the weapons
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const RegularWeapon& rw);

	virtual bool IsHeavy() override ;
	};

#endif