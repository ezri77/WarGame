#include "stdafx.h"
#include "BodyArmor.h"


BodyArmor::BodyArmor(Point p, double def):Armor(p,def)
{
}

BodyArmor::~BodyArmor()
{
}


void BodyArmor::toString()const
{

}


std::ostream& operator<<(std::ostream& os, const BodyArmor& ba)
{
	ba.toString();
	return os;
 }
