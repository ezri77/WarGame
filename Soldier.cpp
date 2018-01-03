//
// Created by ezri7 on 01/01/2018.
//

#include <w32api/docobjectservice.h>
#include "Soldier.h"

Soldier::Soldier(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints,const int _armySymbol) : _location(_location),
                                                                                                                                  _raduis(_raduis),
                                                                                                                                  _lifePoints(_lifePoints),
                                                                                                                                  _maxlifePoints(_maxlifePoints),
                                                                                                                                  _armySymbol(_armySymbol){}

const Point& Soldier::get_location() const {
    return _location;
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

const int Soldier::get_army_symbol()const
{
    return _armySymbol;
}

bool Soldier::can_reach_there(double distance)
{
    if (PICK_DISTANCE >= distance)return true;
    else return false;
}

bool Soldier::can_walk_there(double distance)
{
    if (_raduis >= distance)return true;
    else return false;
}

void Soldier::culcLifePoints(double hitPoint, Weapon* weapon) {
    if(weapon != nullptr && weapon->IsHeavy() && !isShiledArmor()){
        _lifePoints = 0 ;
    } else {
        _lifePoints = _lifePoints - (hitPoint * getShildsPower());
    }
}

double Soldier::getShildsPower() {
  double  armorPower = 1 ;
   if(_armors[BODY] != nullptr){
       armorPower *=  _armors[BODY]->getDefenseLevel();
   }
    if(_armors[SHILED] != nullptr){
        armorPower *=  _armors[BODY]->getDefenseLevel();
    }

    return  armorPower ;
}

bool Soldier::isShiledArmor (){
    return _armors[SHILED] != nullptr ;
}

bool Soldier::isAlive() {
   return _lifePoints != 0 ;
}

bool Soldier::isIll() {
   return  _lifePoints <= HEAL_LIFE ;
}
