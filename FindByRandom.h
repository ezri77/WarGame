//
// Created by ezri7 on 02/01/2018.
//

#ifndef CEXR2_FINDBYRANDOM_H
#define CEXR2_FINDBYRANDOM_H

#include "FindSoldierStrategy.h"
#include <iostream>
#include <vector>

class FindByRandom : public FindSoldierStrategy{
private:
    FindByRandom();
    static FindByRandom* randomFind ;
    FindSoldierStrategy* findSolider;
public:
    FindByRandom* getInstance();
    Soldier* find(std::vector<Player*> players, const Soldier& Attacker) override;
};


#endif //CEXR2_FINDBYRANDOM_H
