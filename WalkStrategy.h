//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_WALKSTRATEGY_H
#define CEXR2_WALKSTRATEGY_H


#include "GameBoard.h"
#include "Soldier.h"
#include "FindIllSoldier.h"
class WalkStrategy {

public:
    virtual Point& walk(class GameBoard* board ,Soldier& soldier) = 0 ;

};


#endif //CEXR2_WALKSTRATEGY_H
