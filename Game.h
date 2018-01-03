//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_GAME_H
#define CEXR2_GAME_H

#define NUM_OF_ITER 100

#include "Point.h"
#include "Reportable.h"
#include "Reporter.h"
#include "FileControl.h"
#include "OutputToFile.h"
#include "GameBoard.h"
#include "WalkAction.h"
#include "AttackAction.h"
#include "PickAction.h"
#include <iostream>
#include <string>
#include <fstream>

class Game : public Reportable {
private:
    std::ifstream file;
    Reporter* reporter;
    GameBoard* board ;
    WalkAction* walkAction;
    AttackAction* attackAction;
    PickAction* pickAction;
    int numOfIteration = NUM_OF_ITER ;  //just for exapmle
    std::string inputPath ;
    std::string outPutPath ;

public:
    Game(std::string inputPath, std::string outPutPath );

    ~Game();

    const std::ifstream &getFile() const;

    bool isGameEnd();

    void report() override ;


    void startGame();



};

#endif //CEXR2_GAME_H
