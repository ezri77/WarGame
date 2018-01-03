//
// Created by ezri7 on 03/01/2018.
//

#include "FindIllSoldier.h"


Soldier* FindIllSoldier::find(std::vector<Player*> players, const Soldier &Attacker) {
    /**
     *
     * implement find of closest Solider form the army and cure him
     *
     **/

    return nullptr;
}


FindIllSoldier* FindIllSoldier::getInstance(){
    if(illFind == nullptr ){
        illFind  = new FindIllSoldier();
    }
    return  illFind ;
}

FindIllSoldier* FindIllSoldier::illFind = nullptr ;