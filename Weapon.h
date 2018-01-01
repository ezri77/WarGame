#pragma once
#include "Unsolid.h"
#include "Point.h"

class Weapon:public Unsolid
{
private:
	int _power;
	int _numOfShots;

protected:
	Weapon(Point p, int power, int numOfShots);
	virtual ~Weapon();

public:

	//geters
	//return the power of the weapon
	int getPower()const;
	//return num of shots that the weapon can be use in one turn
	int getNumOfShots()const;

	//seters
	//set the location of the weapon
	void setLocation(Point& p);

	//print the data of the weapons
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

