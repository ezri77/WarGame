//
// Created by ezri7 on 02/01/2018.
//

#ifndef CEXR2_ATTACKACTION_H
#define CEXR2_ATTACKACTION_H

#include "Actions.h"
#include "GameBoard.h"

class AttackAction:public Actions {
public:
    void doAction(class RegularSoldier *soldier, GameBoard *board) override;

    void doAction(struct SniperSoldier *soldier, GameBoard *board) override;

    void doAction(struct HealerSoldier *soldier, GameBoard *board) override;


};


#endif //CEXR2_ATTACKACTION_H
