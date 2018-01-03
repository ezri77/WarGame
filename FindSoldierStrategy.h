//
// Created by ezri7 on 02/01/2018.
//

#ifndef CEXR2_FINDSOLDIERSTRATEGY_H
#define CEXR2_FINDSOLDIERSTRATEGY_H


#include "Player.h"
#include "Soldier.h"
#include <vector>
class FindSoldierStrategy{
public:
    virtual Soldier* find(std::vector<Player*> players,const Soldier& Attacker) = 0 ;
};

#endif //CEXR2_FINDSOLDIERSTRATEGY_H
