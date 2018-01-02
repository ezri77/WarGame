//
// Created by ezri7 on 02/01/2018.
//

#include "GameBoard.h"

GameBoard::GameBoard(const int _length, const int _width, const std::vector<Soldier> &soldeirs,
                     const std::vector<Solid> &solids, const std::vector<Weapon> &weapons,
                     const std::vector<Armor> &armors) : _length(_length), _width(_width), soldeirs(soldeirs),
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

const std::vector<Soldier> &GameBoard::getSoldeirs() const {
    return soldeirs;
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


