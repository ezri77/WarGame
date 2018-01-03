//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_FINDILLSOLDIER_H
#define CEXR2_FINDILLSOLDIER_H


#include "Soldier.h"
#include "Player.h"

class FindIllSoldier : public FindSoldierStrategy {
private:
    FindIllSoldier();
    static FindIllSoldier* illFind ;
public:
    FindIllSoldier* getInstance();
    Soldier* find(std::vector<Player*> players, const Soldier& Healer) override;
};




#endif //CEXR2_FINDILLSOLDIER_H
