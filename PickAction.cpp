//
// Created by ezri7 on 03/01/2018.
//

#include "PickAction.h"





void PickAction::doAction(RegularSoldier *soldier, GameBoard *board) {

}

void PickAction::doAction(SniperSoldier *soldier, GameBoard *board) {

}

void PickAction::doAction(HealerSoldier *soldier, GameBoard *board) {

}



PickAction* PickAction::getInstance(){
    if(Pick == nullptr ){
        Pick  = new PickAction();
    }
    return  Pick ;
}
PickAction* PickAction::Pick  = nullptr;
