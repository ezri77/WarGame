//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_COMPUTERWALK_H
#define CEXR2_COMPUTERWALK_H

#include "WalkStrategy.h"

class ComputerWalk :public WalkStrategy {
    Point& walk(GameBoard* board ,Soldier& soldier) override ;
};


#endif //CEXR2_COMPUTERWALK_H
