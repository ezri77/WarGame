//
// Created by ezri7 on 03/01/2018.
//

#include "HumanPlayer.h"


void HumanPlayer::report(){
    getReporter()->report(this);
}

HumanPlayer::HumanPlayer(WalkStrategy* strategy, int armySymbol,std::string path):Player(armySymbol),strategy(strategy){
    setReporter(new FileControl(path));
    report();

}

Point* HumanPlayer::getStep(Soldier* soldier) {
    int index = getSoldierIndex(soldier);
    Point* p = steps.at(index).front();
    steps.at(index).pop_back();
    return p;
}

Point *HumanPlayer::getNextStep(GameBoard *board, Soldier &soldier) {
    strategy->walk(board,soldier);
}


