//
// Created by ezri7 on 01/01/2018.
//

#include "HealerSoldier.h"

HealerSoldier::HealerSoldier(const Point &_location) : WarSupporter(_location, RADIUS, MAX_LIFE_POINT, MAX_LIFE_POINT) {}

HealerSoldier::~HealerSoldier() {


}

void HealerSoldier::play(Actions *action) {
action->doAction(this);
}

const int HealerSoldier::get_maxLife() const {
    return _maxLife;
}
