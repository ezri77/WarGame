//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_PICKACTION_H
#define CEXR2_PICKACTION_H


//class PickAction {

#include "RegularSoldier.h"
#include "SniperSoldier.h"
#include "HealerSoldier.h"
#include "FindByRandom.h"
#include "Actions.h"


class PickAction: public Actions {
private:
    PickAction();
    static PickAction* Pick ;
public:

    PickAction* getInstance();

    void doAction(RegularSoldier *soldier, GameBoard *board) override;

    void doAction(SniperSoldier *soldier, GameBoard *board) override;

    void doAction(HealerSoldier *soldier, GameBoard *board) override;
};



#endif //CEXR2_PICKACTION_H
