//
// Created by ezri7 on 01/01/2018.
//

#include "WalkAction.h"
#include "HumanWalk.h"


void WalkAction::doAction(RegularSoldier *soldier, GameBoard *board) {
    short  walkingRate = 1 ;
    if(soldier->isIll()){
        walkingRate *= 2 ;
    }
    double distance ;
    Point* PointSoldierWillGo ;
    Point* destPoint = board->getPlayerByArmySymbol(soldier->get_army_symbol()).getNextStep(board,*soldier);
    Point* solidObjPoint = board->getObstecalePoint(soldier->get_location(),destPoint);
    if(solidObjPoint != nullptr){
        destPoint = solidObjPoint;
    }
    distance = board->distance(&soldier->get_location(),destPoint) ;

    if(distance <= soldier->get_raduis()){
        soldier->set_location(*destPoint);
    } else if( soldier->isRunRange(distance,walkingRate) ) {
        PointSoldierWillGo = board->getPointByCalcRadius(&soldier->get_location(),destPoint,soldier->getRunRadius(),walkingRate);
        soldier->set_location(*PointSoldierWillGo);
        soldier->decreaseLifeOnRun();
    } else {
        PointSoldierWillGo = board->getPointByCalcRadius(&soldier->get_location(),destPoint,soldier->get_raduis(),walkingRate);
        soldier->set_location(*PointSoldierWillGo);
    }

}

void WalkAction::doAction(SniperSoldier *soldier, GameBoard *board) {
    short  walkingRate = 1 ;
    if(soldier->isIll()){
        walkingRate *= 2 ;
    }
    double distance ;
    Point* PointSoldierWillGo ;
    Point* destPoint = board->getPlayerByArmySymbol(soldier->get_army_symbol()).getNextStep(board,*soldier);
    Point* solidObjPoint = board->getObstecalePoint(soldier->get_location(),destPoint);
    if(solidObjPoint != nullptr){
        destPoint = solidObjPoint;
    }
    distance = board->distance(&soldier->get_location(),destPoint) ;
    if(distance <= soldier->get_raduis()){
        soldier->set_location(*destPoint);
    } else {
        PointSoldierWillGo = board->getPointByCalcRadius(&soldier->get_location(),destPoint,soldier->get_raduis(),walkingRate);
        soldier->set_location(*PointSoldierWillGo);
    }

}

void WalkAction::doAction(HealerSoldier *soldier, GameBoard *board) {
    short  walkingRate = 1 ;
    if(soldier->isIll()){
        walkingRate *= 2 ;
    }
    double distance ;
    Point* PointSoldierWillGo ;
    Point* destPoint = board->getPlayerByArmySymbol(soldier->get_army_symbol()).getNextStep(board,*soldier);
    Point* solidObjPoint = board->getObstecalePoint(soldier->get_location(),destPoint);
    if(solidObjPoint != nullptr){
        destPoint = solidObjPoint;
    }
    distance = board->distance(&soldier->get_location(),destPoint) ;
    if(distance <= soldier->get_raduis()){
        soldier->set_location(*destPoint);
    } else {
        PointSoldierWillGo = board->getPointByCalcRadius(&soldier->get_location(),destPoint,soldier->get_raduis(),walkingRate);
        soldier->set_location(*PointSoldierWillGo);
    }
    Soldier*  illSoldier= board->findSolider(findIllSoldier->getInstance(),*soldier);
    if(illSoldier != nullptr){
        illSoldier->set_lifePoints(illSoldier->get_maxlifePoints());
    }
}

WalkAction* WalkAction::getInstance(){
    if(walk == nullptr ){
        walk  = new WalkAction();
    }
    return  walk ;
}

WalkAction* WalkAction::walk  = nullptr;

