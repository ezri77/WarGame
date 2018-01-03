//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_REPORTER_H
#define CEXR2_REPORTER_H

#include "Game.h"
#include "Player.h"

class Reporter{
public:
    virtual void report(class Game* game) =0;
    virtual void report(class Player* player) = 0;
};
#endif //CEXR2_REPORTER_H
