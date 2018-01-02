//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_SNIPERSOLDIER_H
#define CEXR2_SNIPERSOLDIER_H

#define RADIUS 2
#define MAX_LIFE_POINT 80
#include "WarSupporter.h"

class SniperSoldier: public Warrior {
public:
    SniperSoldier(const Point &_location,Weapon *wepon, const int _armySymbol);
    virtual ~SniperSoldier();
    void play(Actions* action) override;

public:


};




#endif //CEXR2_SNIPERSOLDIER_H
