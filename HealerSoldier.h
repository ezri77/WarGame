//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_HEALERSOLDIER_H
#define CEXR2_HEALERSOLDIER_H

#define RADIUS 4
#define MAX_LIFE_POINT 80

#include "WarSupporter.h"

class HealerSoldier : public WarSupporter {

public:

    HealerSoldier(const Point &_location, const int _armySymbol);
    virtual ~HealerSoldier();

    void play(Actions *action) override;

};


#endif //CEXR2_HEALERSOLDIER_H
