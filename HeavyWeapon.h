#ifndef HAEVY_WEP
#define HAEVY_WEP
#include "Weapon.h"

class HeavyWeapon:public Weapon
{

protected:

	HeavyWeapon(Point p, int power, int numOfShots);

	virtual~HeavyWeapon();
public:

	//print the data of the weapons
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const HeavyWeapon& hw);

	virtual bool IsHeavy() override ;
};

#endif