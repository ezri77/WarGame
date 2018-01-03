//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_PICKSTRATEGY_H
#define CEXR2_PICKSTRATEGY_H
#include "Player.h"
#include "Soldier.h"
#include <vector>
class PickStrategy{
public:
    virtual Object* pick(std::vector<Object*> items,const Soldier& Attacker) = 0 ;
};

#endif //CEXR2_PICKSTRATEGY_H
