
#include "Unsolid.h"


Unsolid::Unsolid(Point p):Object(p)
{
}


Unsolid::~Unsolid()
{
}

std::ostream& operator<<(std::ostream& os, const Unsolid& un)
{
	 un.toString();
	 return os;
}
