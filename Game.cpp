//
// Created by ezri7 on 01/01/2018.
//

#include "Game.h"




Game::Game(std::string path):reporter(new FileControl(path)) {
report();

}


Game::~Game() {

}

void Game::report() {
    reporter->report(this);
}


void Game::startGame(){

}

const std::ifstream &Game::getFile() const {
    return file;
}


const Player* Game::getPlayers() const {
    return players;
}


int Game::getNumOfPlayers() const {
    return numOfPlayers;
}

