//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_REGULARSOLDIER_H
#define CEXR2_REGULARSOLDIER_H

#define RADIUS 2
#define MAX_LIFE_POINT 80
#include "Warrior.h"
#include "Point.h"
#include "Weapon.h"
#include "Actions.h"

class RegularSoldier : public Warrior {
public:
    RegularSoldier(const Point &_location, Weapon *wepon, const int _armySymbol);

    virtual ~RegularSoldier();

    void play(Actions* action) override;

};


#endif //CEXR2_REGULARSOLDIER_H
