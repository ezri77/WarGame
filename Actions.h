//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_ACTIONS_H
#define CEXR2_ACTIONS_H

#include "RegularSoldier.h"


class Actions {
public:
    //visitor actions of Regular Soldier
    virtual void doAction (class RegularSoldier* soldier,GameBoard* board) = 0 ;

    //visitor actions of Sniper Soldier
    virtual void doAction (class SniperSoldier* soldier,GameBoard* board) = 0 ;

    //visitor actions of Healer Soldier
    virtual void doAction (class HealerSoldier* soldier,GameBoard* board) = 0 ;
};


#endif //CEXR2_ACTIONS_H

