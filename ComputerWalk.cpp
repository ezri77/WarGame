//
// Created by ezri7 on 03/01/2018.
//

#include "ComputerWalk.h"


Point &ComputerWalk::walk(GameBoard *board, Soldier &soldier) {
return *board->getPlayerByArmySymbol(soldier.get_army_symbol()).getStep(&soldier);
}

