//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_SOLDIER_H
#define CEXR2_SOLDIER_H

#define HEAL_LIFE 30
#define PICK_DISTANCE 2

#include "Point.h"

#include "Armor.h"
#include "Actions.h"

class Soldier {

private:
    Point _location;
    Armor* _armors[2];
    const double _raduis ;
    int _lifePoints;
    const int _maxlifePoints;
	const int _armySymbol;

private:

    enum armorType{BODY,SHILED};
public:

    virtual void play(Actions* action , GameBoard* board) = 0;

    virtual ~Soldier();

    Soldier(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints,const int _armySymbol);

    void set_location(const Point &_location);

    void set_lifePoints(int _lifePoints);

    void setShiledArmor(Armor armor);

    void setBodyArmor(Armor armor);

    const Point &get_location() const;

    const double get_raduis() const;

    int get_lifePoints() const;

    const int get_maxlifePoints() const;

	const int get_army_symbol()const;

	bool can_reach_there(double distanc);

	bool can_walk_there(double distanc);

	bool isIll();

	void culcLifePoints(double hitPoint,Weapon* weapen);

	double getShildsPower() ;

	bool isShiledArmor () ;

	bool isAlive ();

    ///report????

};


#endif //CEXR2_SOLDIER_H
