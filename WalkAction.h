//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_WALKACTION_H
#define CEXR2_WALKACTION_H

#include "RegularSoldier.h"
#include "SniperSoldier.h"
#include "HealerSoldier.h"
#include "Actions.h"


class WalkAction: public Actions {
public:
    void doAction(RegularSoldier *soldier, GameBoard *board) override;

    void doAction(SniperSoldier *soldier, GameBoard *board) override;

    void doAction(HealerSoldier *soldier, GameBoard *board) override;
};
};


#endif //CEXR2_WALKACTION_H
