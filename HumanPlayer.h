//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_HUMANPLAYER_H
#define CEXR2_HUMANPLAYER_H

#include "Player.h"

class HumanPlayer : public Player{
private:
    std::vector< std::vector<Point*> > steps ;
    WalkStrategy* strategy;
public:
    HumanPlayer(WalkStrategy* strategy,int armySymbol,std::string _path);
    virtual void report() ;
    Point* getStep(Soldier* soldier) override;
    Point* getNextStep(GameBoard* , Soldier&);
};


#endif //CEXR2_HUMANPLAYER_H
