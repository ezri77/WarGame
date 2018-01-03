//
// Created by ezri7 on 01/01/2018.
//

#include "Game.h"


Game::Game(std::string inputPath, std::string outPutPath ):reporter(new FileControl(inputPath)),inputPath(inputPath),outPutPath(outPutPath) {
    report();
    attackAction->getInstance();
    walkAction->getInstance();

}


Game::~Game() {

}

void Game::report() {
    reporter->report(this);
}


void Game::startGame() {
    do {
        auto playerItr = board->getPlayers().begin();
        auto playerItrEnd = board->getPlayers().end();
        for (; playerItr != playerItrEnd; ++playerItr) {
            auto soldierItr = (*playerItr)->getSoldiers().begin();
            auto soldierItrEnd = (*playerItr)->getSoldiers().end();
            for (; soldierItr != soldierItrEnd; ++soldierItr) {
                (*soldierItr)->play(walkAction, board);
                (*soldierItr)->play(pickAction,board);
                (*soldierItr)->play(attckAction, board);
            }
        }
    }while (isGameEnd());
    reporter  = new OutputToFile(outPutPath);
    report();
}

const std::ifstream &Game::getFile() const {
    return file;
}

bool Game::isGameEnd() {
    /**
     * will check in all Players if :
     * -> if the player dead
     * -> not dead but all his soldiers are finished
     * after this happen to each Player he will indicate the Game
     * if to continue or finish!
     *
     */

    --numOfIteration;
    if(numOfIteration != 0 ) {
        return true;
    }else {
        return false;
    }
}

