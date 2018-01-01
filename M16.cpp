#include "stdafx.h"
#include "M16.h"


M16::M16(Point p) :RegularWeapon(p, 50, 1)
{
}


M16::~M16()
{
}



 void M16::toString()const
{
	 std::cout << "its:m16";
}

 std::ostream& operator<<(std::ostream& os, const M16& m16)
 {
	 m16.toString();
	 //os << "[" << p._x << " " << p._y << "]";
	 return os;
 }