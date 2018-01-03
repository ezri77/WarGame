//
// Created by ezri7 on 01/01/2018.
//

#include "HealerSoldier.h"

HealerSoldier::HealerSoldier(Point &_location, int armySymbol) : WarSupporter(_location, RADIUS_HEALER, MAX_LIFE_POINT_HEAL, MAX_LIFE_POINT_HEAL, armySymbol) {}

HealerSoldier::~HealerSoldier() {


}

void HealerSoldier::play(Actions *action,GameBoard* board) {
action->doAction(this,board);
}

const int HealerSoldier::get_maxLife() const {
    return MAX_LIFE_POINT_HEAL;
}
