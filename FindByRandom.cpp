//
// Created by ezri7 on 02/01/2018.
//

#include "FindByRandom.h"

Soldier* FindByRandom::find(std::vector<Player*> players, const Soldier &Attacker) {
    /**
     *
     * implement random search of soldier
     *
     **/

    return players.front()->getSoldiers().front();
}


FindByRandom* FindByRandom::getInstance(){
    if(randomFind == nullptr ){
        randomFind  = new FindByRandom();
    }
    return  randomFind ;
}

FindByRandom* FindByRandom::randomFind = nullptr ;