//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_WARRIOR_H
#define CEXR2_WARRIOR_H

#include "Soldier.h"
#include "Weapon.h"
#include "Actions.h"
#include "GameBoard.h"

class Warrior: public Soldier {
public:
    virtual ~Warrior();

    Warrior(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints, Weapon *wepon, const int _armySymbol);

public:

private:
    Weapon* wepon;

public:
    void setWepon(Weapon *wepon);
    virtual void play(Actions* action,GameBoard* board) = 0;
    Weapon *getWepon() const;
    virtual double culcPowerShot(double distance) = 0 ;

    //report???

};


#endif //CEXR2_WARRIOR_H
