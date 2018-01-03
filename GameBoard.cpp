//
// Created by ezri7 on 02/01/2018.
//

#include "GameBoard.h"
#include "FindSoldierStrategy.h"
#include "Solid.h"

GameBoard::GameBoard(const int _length, const int _width, const std::vector<Soldier> &soldeirs,
                     const std::vector<Solid> &solids, const std::vector<Weapon> &weapons,
                     const std::vector<Armor> &armors) : _length(_length), _width(_width),
                                                         solids(solids), weapons(weapons), armors(armors) {}

GameBoard::~GameBoard() {

}

const int GameBoard::getLength() const {
    return _length;
}

const int GameBoard::get_width() const {
    return _width;
}

const std::vector<Armor> &GameBoard::getArmors() const {
    return armors;
}


const std::vector<Solid> &GameBoard::getSolids() const {
    return solids;
}

const std::vector<Weapon> &GameBoard::getWeapons() const {
    return weapons;
}

bool GameBoard::isInBoardBounds(Point& p){

}


Weapon& GameBoard::changeWeponByIndex(int index , Weapon& w){

}

void GameBoard::removeSoldierByIndex(int index) {

}


 const std::vector<Player*> GameBoard::getPlayers() const{
    return players;
}


int GameBoard::getNumOfPlayers() const {
    return numOfPlayers;
}

Soldier*  GameBoard::findSolider(FindSoldierStrategy* strategy, Soldier& currentSoldier ){
    return strategy->find(players,currentSoldier);
}


/*Player&  GameBoard::getPlayerByIndex(int i) const{
    return ;
}*/

double GameBoard::distance(const Point* p1, const Point* p2) {
    return 0;
}

Player& GameBoard::getPlayerByArmySymbol(int armySymbol) {

}

Point *GameBoard::getObstecalePoint(const Point &point, Point *pPoint) {
/**
 * this function will search if there is an obstecle between the Points
 * find one - get the point of him
 * else - return nullptr
 */
    return nullptr ;
}

Point *GameBoard::getPointByCalcRadius(const Point *point, Point *pPoint, double radius, short walkingRate) {
    /**
     * calc the max Point the solider can go in the range between tow Points
     * with a restriction of the radius he could walk and his hleaf situations
     *
     */
    return nullptr;
}


