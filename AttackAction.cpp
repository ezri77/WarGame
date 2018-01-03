//
// Created by ezri7 on 02/01/2018.
//

#include "AttackAction.h"


void AttackAction::doAction(class RegularSoldier& soldier, GameBoard *board) {
    Soldier* enemy = board->findSolider( findByRandom.getInstance(),soldier);
    double distance = board->distance(&soldier.get_location(), &enemy->get_location());
    double powerShot = soldier.culcPowerShot(distance);
    enemy->culcLifePoints(powerShot,soldier.getWepon());
    if(!enemy->isAlive()){
        board->getPlayerByArmySymbol(enemy->get_army_symbol() - 1 ).removeSoldier(enemy);
    }
}

void AttackAction::doAction(class SniperSoldier& soldier, GameBoard *board) {
    Soldier* enemy = board->findSolider( findByRandom.getInstance(),soldier);
    double distance = board->distance(&soldier.get_location(), &enemy->get_location());
    double powerShot = soldier.culcPowerShot(distance);
    enemy->culcLifePoints(powerShot,soldier.getWepon());
    if(!enemy->isAlive()){
        board->getPlayerByArmySymbol(enemy->get_army_symbol() - 1 ).removeSoldier(enemy);
    }
}

void AttackAction::doAction(class HealerSoldier& soldier, GameBoard *board) {
    Soldier* enemy = board->findSolider( findByRandom.getInstance(),soldier);
    enemy->culcLifePoints(HIT_POWER_OF_HEALER, nullptr);
    if(!enemy->isAlive()){
        board->getPlayerByArmySymbol(enemy->get_army_symbol() - 1 ).removeSoldier(enemy);
    }
}


AttackAction* AttackAction::getInstance(){
    if(attack == nullptr ){
        attack  = new AttackAction();
    }
    return  attack ;
}

AttackAction* AttackAction::attack  = nullptr;
