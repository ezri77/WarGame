//
// Created by ezri7 on 01/01/2018.
//

#include "Player.h"

const std::vector<Soldier *> &Player::getSoldiers() const {
    return soldiers;
}

Reporter *Player::getReporter() const {
    return reporter;
}

void Player::setReporter(Reporter *reporter) {
    Player::reporter = reporter;
}

Player::Player(int ArmySymbol) : ArmySymbol(ArmySymbol) {}

Player::~Player() {
    auto itr = soldiers.begin();
    auto itrEnd = soldiers.end();
    for (; itr != itrEnd; ++itr){
        delete(itr);
    }

}

void Player::removeSoldier(Soldier *soldier) {
    auto itr = soldiers.begin();
    auto itrEnd = soldiers.end();
    while( *itr != soldier &&  itr != itrEnd){
        ++ itr ;
    }
    delete (*itr) ;
    soldiers.erase(itr);
}

int Player::getSoldierIndex(Soldier *soldier) {
    int index = 0 ;
    std::vector<Soldier*>::iterator itr = soldiers.begin();
    std::vector<Soldier*>::iterator itrEnd = soldiers.begin();
    while( *itr != soldier &&  itr != itrEnd){
        ++ itr ;
        ++index ;
    }
    return index;
}

void Player::addSoldier(Soldier *soldier) {
soldiers.push_back(soldier);
}

void Player::report() {
reporter->report(this);
}
