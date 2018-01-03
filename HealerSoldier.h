//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_HEALERSOLDIER_H
#define CEXR2_HEALERSOLDIER_H

#define RADIUS_HEALER 4
#define MAX_LIFE_POINT_HEAL 80

#include "WarSupporter.h"

class HealerSoldier : public WarSupporter {

public:

    HealerSoldier(Point &_location,int _armySymbol);
    virtual ~HealerSoldier();

    void play(Actions *action,GameBoard* board) override;

    const int get_maxLife() const;
};


#endif //CEXR2_HEALERSOLDIER_H
