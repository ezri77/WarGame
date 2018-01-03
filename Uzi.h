#ifndef UZI
#define UZI
#include "RegularWeapon.h"
class Uzi:public RegularWeapon
{
public:
	Uzi(Point p);
	virtual ~Uzi();


	//print the data of the weapons
	virtual void toString()const;

	// implement oof operator <<
	friend std::ostream& operator<<(std::ostream& os, const Uzi& hw);


};

#endif
