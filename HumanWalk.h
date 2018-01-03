//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_HUMANWALK_H
#define CEXR2_HUMANWALK_H

#include "WalkStrategy.h"

class HumanWalk : public WalkStrategy{
private:
private:
    HumanWalk();
    static HumanWalk* humanWalk ;
public:
    HumanWalk* getInstance();
    virtual Point& walk(GameBoard* board ,Soldier& soldier) override ;
};


#endif //CEXR2_HUMANWALK_H
