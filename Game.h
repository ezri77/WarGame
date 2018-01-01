//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_GAME_H
#define CEXR2_GAME_H
#include "Point.h"
#include "Reportable.h"
#include "Reporter.h"
#include "FileControl.h"
#include <iostream>
#include <string>
#include <fstream>

class Game : public Reportable {
private:
    std::ifstream file;
    Reporter* reporter;
    // Player  players [];
    int height;
    int width;
    int numOfSoliders;
    int numOfPlayers;

public:
    const std::ifstream &getFile() const;

//    const Player *getPlayers() const;

    void setNumOfSoliders(int numOfSoliders);

    int getNumOfPlayers() const;

    int getWidth() const;

    void setWidth(int width);

    int getNumOfSoliders() const;

    void setNumOfPlayers(int numOfPlayers);


    int getHeight() const;

    void setHeight(int height);

    void report() override ;

    Game(std::string path);

    ~Game();

    void startGame();



};

#endif //CEXR2_GAME_H
