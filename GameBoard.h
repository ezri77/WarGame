//
// Created by ezri7 on 02/01/2018.
//

#ifndef CEXR2_GAMEBOARD_H
#define CEXR2_GAMEBOARD_H

#include "Weapon.h"
#include "Soldier.h"
#include "Armor.h"
#include "Solid.cpp"
#include <iostream>
#include <string>
#include <vector>


class GameBoard {

private:

    const int _length;
    const int _width;
    std::vector<Soldier> soldeirs ;
    std::vector<Solid> solids ;
    std::vector<Weapon> weapons ;
    std::vector<Armor> armors ;


public:

    GameBoard(const int _length, const int _width, const std::vector<Soldier> &soldeirs,
              const std::vector<Solid> &solids, const std::vector<Weapon> &weapons, const std::vector<Armor> &armors);

    virtual ~GameBoard();

    const int get_width() const;

    const std::vector<Armor> &getArmors() const;

    const std::vector<Soldier> &getSoldeirs() const;

    const std::vector<Solid> &getSolids() const;

    const std::vector<Weapon> &getWeapons() const;

    const int getLength() const;

    bool isInBoardBounds(Point& p);

    //get weapon and replace with another
    Weapon& changeWeponByIndex(int index , Weapon& w);

    void removeSoldierByIndex(int index);




};


#endif //CEXR2_GAMEBOARD_H
