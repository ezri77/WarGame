
#include "Armor.h"


Armor::Armor(Point p , double def):Unsolid(p), _defenseLevel(def)
{
}


Armor::~Armor()
{
}

//return defenseLevel
double Armor::getDefenseLevel()const
{
	return _defenseLevel;
}

//print the data of the armor
void Armor::toString()const
{
	
 }

// implement oof operator <<
std::ostream& operator<<(std::ostream& os, const Armor& a)
{
	return os;
 }
