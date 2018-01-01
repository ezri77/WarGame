#pragma once
#include "Unsolid.h"

class Armor:Unsolid
{
private:
	double _defenseLevel;

protected:
	Armor(Point p, double d);
	virtual ~Armor();

public:
	
	//return defenseLevel
	double getDefenseLevel()const;

	//print the data of the armor
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const Armor& a);


};

