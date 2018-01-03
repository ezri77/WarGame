//
// Created by ezri7 on 01/01/2018.
//

#include "RegularSoldier.h"



RegularSoldier::~RegularSoldier() {

}

void RegularSoldier::play(Actions* action,GameBoard* board) {
    action->doAction(this,board);
}

RegularSoldier::RegularSoldier(Point &_location, Weapon *wepon, int _armySymbol) : Warrior(_location, RADIUS_REGUALER,MAX_LIFE_POINT, MAX_LIFE_POINT, wepon, _armySymbol) {}

bool RegularSoldier::isRunRange(double distance, short walkingRate) {
    return ((get_raduis() * (runRange / walkingRate)) <= distance) ;
}

double RegularSoldier::getRunRange() const {
    return runRange;
}

double RegularSoldier::getRunRadius() const {
    return runRadius;
}

void RegularSoldier::decreaseLifeOnRun() {
    set_lifePoints(get_lifePoints() - RunLifePrice);
}

int RegularSoldier::getRunLifePrice() const {
    return MAX_LIFE_POINT ;
}


