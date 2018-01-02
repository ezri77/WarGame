//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_GAME_H
#define CEXR2_GAME_H
#include "Point.h"
#include "Reportable.h"
#include "Reporter.h"
#include "FileControl.h"
#include "Player.h"
#include <iostream>
#include <string>
#include <fstream>

class Game : public Reportable {
private:
    std::ifstream file;
    Reporter* reporter;
    Player  players [];
    int numOfPlayers;

public:
    Game(std::string path);

    ~Game();

    const std::ifstream &getFile() const;

    const Player* getPlayers() const;

    //Player * getPlayerByIndex(int i) const;


    void report() override ;


    void startGame();



};

#endif //CEXR2_GAME_H
