//
// Created by ezri7 on 01/01/2018.
//

#include "SniperSoldier.h"

SniperSoldier::SniperSoldier(const Point &_location, Weapon *wepon) : Warrior(_location, RADIUS, MAX_LIFE_POINT, MAX_LIFE_POINT, wepon) {}

SniperSoldier::~SniperSoldier() {

}

void SniperSoldier::play(Actions* action){
    action->doAction(this);
}

