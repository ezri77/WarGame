//
// Created by ezri7 on 01/01/2018.
//

#include "Warrior.h"

Weapon *Warrior::getWepon() const {
    return wepon;
}

void Warrior::setWepon(Weapon *wepon) {
    Warrior::wepon = wepon;
}


Warrior::~Warrior() {

}

Warrior::Warrior(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints, Weapon *wepon, const int _armySymbol)
        : Soldier(_location, _raduis, _lifePoints, _maxlifePoints, _armySymbol), wepon(wepon) {}
