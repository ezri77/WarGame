//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_SNIPERSOLDIER_H
#define CEXR2_SNIPERSOLDIER_H

#define RADIUS_SNIPER 2
#define MAX_LIFE_POINT_SNI 80

#include "WarSupporter.h"
#include "GameBoard.h"

class SniperSoldier: public Warrior {
public:
    SniperSoldier(const Point &_location,Weapon *wepon, const int _armySymbol);
    virtual ~SniperSoldier();
    void play(Actions* action, GameBoard* board) override;
    double culcPowerShot(double distance) override;
};




#endif //CEXR2_SNIPERSOLDIER_H
