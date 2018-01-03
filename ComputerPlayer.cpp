//
// Created by ezri7 on 03/01/2018.
//

#include "ComputerPlayer.h"

Point* ComputerPlayer::getStep(Soldier *soldier) {
    std::random_device rand;
    std::mt19937 gen(rand());
    std::uniform_real_distribution<> randNum(1.0,200.0);
    double x = randNum(gen);
    double y = randNum(gen);
    return new Point(x,y);
}

ComputerPlayer::ComputerPlayer(WalkStrategy* strategy,int ArmySymbol) : Player(ArmySymbol),strategy(strategy) {}
Point *ComputerPlayer::getNextStep(GameBoard *board, Soldier &soldier) {
    strategy->walk(board,soldier);
}
