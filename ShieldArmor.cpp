#include "stdafx.h"
#include "ShieldArmor.h"


ShieldArmor::ShieldArmor(Point p, double def) :Armor(p, def)
{
}


ShieldArmor::~ShieldArmor()
{
}

void ShieldArmor::toString()const
{

}


std::ostream& operator<<(std::ostream& os, const ShieldArmor& sh)
{

	sh.toString();
	return os;

}
