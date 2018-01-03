//
// Created by ezri7 on 03/01/2018.
//

#include "HumanWalk.h"

Point& HumanWalk::walk(GameBoard *board, Soldier &soldier) {
    /**
     * here we can to add some logic
     * on the Point that return from the file
     * to see if its better to go to max duration
     * or maybe it better to walk more closly to not stack on some object/pick armors / etc.
     */
    return *board->getPlayerByArmySymbol(soldier.get_army_symbol()).getStep(&soldier);

}

HumanWalk* HumanWalk::getInstance(){
    if(humanWalk == nullptr ){
        humanWalk  = new HumanWalk();
    }
    return  humanWalk ;
}

HumanWalk* HumanWalk::humanWalk = nullptr ;