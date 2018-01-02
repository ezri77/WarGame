//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_WARRIOR_H
#define CEXR2_WARRIOR_H

#include "Soldier.h"
#include "Weapon.h"
#include "Actions.h"

class Warrior: public Soldier {
public:
    virtual ~Warrior();

    Warrior(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints, Weapon *wepon, const int _armySymbol);

public:

private:
    Weapon* wepon;

public:
    void setWepon(Weapon *wepon);
    virtual void play(Actions* action) = 0;
    Weapon *getWepon() const;

    //report???

};


#endif //CEXR2_WARRIOR_H
