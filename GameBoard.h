//
// Created by ezri7 on 02/01/2018.
//

#ifndef CEXR2_GAMEBOARD_H
#define CEXR2_GAMEBOARD_H

#include "Weapon.h"
#include "Soldier.h"
#include "Armor.h"
#include "Solid.cpp"
#include "Player.h"
#include "FindSoldierStrategy.h"
#include "WalkStrategy.h"
#include "Solid.h"
#include <iostream>
#include <string>
#include <vector>


class GameBoard {

private:

    const int _length;
    const int _width;
    int numOfPlayers;
    std::vector<Player*>  players ;
    std::vector<Solid> solids ;
    std::vector<Weapon> weapons ;
    std::vector<Armor> armors ;
    FindSoldierStrategy* Findstrategy ;



public:

    GameBoard(const int length, const int width,
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

	double distance(const Point* p1,const Point* p2);

   const std::vector<Player*> getPlayers() const ;

    Soldier* findSolider(FindSoldierStrategy* strategy,Soldier& current );

   // Point& moves(WalkStrategy* strategy, Soldier& current);

   /* Player& getPlayerByIndex(int i) const;*/


    Player& getPlayerByArmySymbol (int armySymbol);


    Point *getObstecalePoint(const Point &point, Point *pPoint);

    Point *getPointByCalcRadius(const Point *point, Point *pPoint, double radius, short walkingRate);
};


#endif //CEXR2_GAMEBOARD_H
