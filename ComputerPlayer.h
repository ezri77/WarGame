//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_COMPUTERPLAYER_H
#define CEXR2_COMPUTERPLAYER_H


#include "Player.h"
#include <random>
class ComputerPlayer : public  Player{
private :
    WalkStrategy* strategy ;
public:
    ComputerPlayer(WalkStrategy* strategy,int ArmySymbol);

    Point *getStep(Soldier *soldier) override;

    Point *getNextStep(GameBoard *board, Soldier &soldier) override;
};


#endif //CEXR2_COMPUTERPLAYER_H
