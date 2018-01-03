//
// Created by ezri7 on 01/01/2018.
//

#include "SniperSoldier.h"

SniperSoldier::SniperSoldier(const Point &_location, Weapon *wepon, const int _armySymbol) : Warrior(_location, RADIUS_SNIPER, MAX_LIFE_POINT_SNI, MAX_LIFE_POINT_SNI, wepon,_armySymbol) {}

SniperSoldier::~SniperSoldier() {

}

void SniperSoldier::play(Actions* action, GameBoard* board){
    action->doAction(this, board);
}

double SniperSoldier::culcPowerShot(double distance) {
    return ((distance - 1 ) / distance ) * getWepon()->getNumOfShots() * getWepon()->getPower() ;
}

