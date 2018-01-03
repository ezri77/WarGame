//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_PLAYER_H
#define CEXR2_PLAYER_H

#include "Point.h"
#include "Reportable.h"
#include "Reporter.h"
#include "FileControl.h"
#include "Soldier.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


class Player : public Reportable  {
private:
    std::vector<Soldier*> soldiers ;
    Reporter* reporter;
    int ArmySymbol;

public:
    Player(int ArmySymbol);
    virtual ~Player();
    const std::vector<Soldier *>& getSoldiers() const;
    virtual void report() override ;
    Reporter *getReporter() const;
    void setReporter(Reporter *reporter);
    void addSoldier(Soldier* soldier);
    int getSoldierIndex(Soldier* soldier);
    void removeSoldier(Soldier* soldier)  ;
    virtual Point* getStep(Soldier * soldier) = 0;
    virtual Point* getNextStep(GameBoard *board, Soldier &soldier) = 0 ;





};


#endif //CEXR2_PLAYER_H
