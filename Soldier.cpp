//
// Created by ezri7 on 01/01/2018.
//

#include <w32api/docobjectservice.h>
#include "Soldier.h"

Soldier::Soldier(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints) : _location(_location),
                                                                                  _raduis(_raduis),
                                                                                  _lifePoints(_lifePoints),
                                                                                  _maxlifePoints(_maxlifePoints){}

const Point &Soldier::get_location() const {
    return _location;
}

const Armor *Soldier::get_armors() const {
    return _armors;
}

const double Soldier::get_raduis() const {
    return _raduis;
}

int Soldier::get_lifePoints() const {
    return _lifePoints;
}

void Soldier::set_location(const Point &location) {
    _location = location;
}


void Soldier::set_lifePoints(int lifePoints) {
    _lifePoints = lifePoints;
}


void  Soldier::setShiledArmor(Armor armor){
    _armors[BODY]=armor;
}

void  Soldier::setBodyArmor(Armor armor){
    _armors[SHILED]=armor;

}

Soldier::~Soldier() {

}

const int Soldier::get_maxlifePoints() const {
    return _maxlifePoints;
}


