//
// Created by ezri7 on 01/01/2018.
//

#include "RegularSoldier.h"



RegularSoldier::~RegularSoldier() {

}

void RegularSoldier::play(Actions* action) {
    action->doAction(this);
}

RegularSoldier::RegularSoldier(const Point &_location, Weapon *wepon, const int _armySymbol) : Warrior(_location, RADIUS,MAX_LIFE_POINT, MAX_LIFE_POINT, wepon, _armySymbol) {}


