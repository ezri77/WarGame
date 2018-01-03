//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_WARSUPPORTER_H
#define CEXR2_WARSUPPORTER_H
#include "Soldier.h"
#include "Actions.h"
#include "GameBoard.h"



class WarSupporter : public Soldier{
public:
    virtual void play(class Actions* action,class GameBoard* board) = 0;

    WarSupporter( Point &_location,  double _raduis, int _lifePoints,  int _maxlifePoints,  int _armySymbol);

    virtual ~WarSupporter();
};


#endif //CEXR2_WARSUPPORTER_H

WarSupporter::~WarSupporter() {

}


WarSupporter::WarSupporter(Point &_location, double _raduis, int _lifePoints, int _maxlifePoints, int _armySymbol)
        : Soldier(_location, _raduis, _lifePoints, _maxlifePoints, _armySymbol) {}
