#pragma once
#include "Armor.h"
class ShieldArmor:public Armor
{
public:
	ShieldArmor(Point p, double def);
	virtual ~ShieldArmor();


	//print the data of the armor
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const Armor& a);

};

