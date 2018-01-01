#pragma once
#include "Armor.h"

class BodyArmor:public Armor
{
public:
	BodyArmor(Point p, double def);
	virtual ~BodyArmor();

	//print the data of the armor
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const Armor& a);

};

