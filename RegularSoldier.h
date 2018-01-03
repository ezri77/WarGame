//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_REGULARSOLDIER_H
#define CEXR2_REGULARSOLDIER_H

#define RADIUS_REGUALER 2
#define MAX_LIFE_POINT 80
#include "Warrior.h"
#include "Point.h"
#include "Weapon.h"
#include "Actions.h"

class RegularSoldier : public Warrior {
private:
    double runRange ;
    double runRadius;
    int RunLifePrice;
public:

    double getRunRange() const;

    double getRunRadius() const;

    int getRunLifePrice() const;

    RegularSoldier( Point &_location, Weapon *wepon, int _armySymbol);

    virtual ~RegularSoldier();

    void play(Actions* action,GameBoard* board) ;

    bool isRunRange(double distance,short walkingRate);

    void decreaseLifeOnRun();

};


#endif //CEXR2_REGULARSOLDIER_H
