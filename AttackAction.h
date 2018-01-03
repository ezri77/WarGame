//
// Created by ezri7 on 02/01/2018.
//

#ifndef CEXR2_ATTACKACTION_H
#define CEXR2_ATTACKACTION_H

#define HIT_POWER_OF_HEALER 10

#include "Actions.h"
#include "RegularSoldier.h"
#include "SniperSoldier.h"
#include "HealerSoldier.h"
#include "GameBoard.h"
#include "FindByRandom.h"



class AttackAction:public Actions {
private:

    static AttackAction* attack ;
    AttackAction();
public:
    FindByRandom findByRandom ;
    AttackAction* getInstance();

    void doAction(class RegularSoldier& soldier, GameBoard *board) ;

    void doAction(class SniperSoldier& soldier, GameBoard *board) ;

    void doAction(class HealerSoldier& soldier, GameBoard *board) ;


};

#endif //CEXR2_ATTACKACTION_H
