//
// Created by ezri7 on 01/01/2018.
//

#include "Game.h"



void Game::report() {
    reporter->report(this);
}

Game::Game(std::string path):reporter(new FileControl(path)) {
report();

}


Game::~Game() {

}

void Game::startGame(){

}

const std::ifstream &Game::getFile() const {
    return file;
}

/*
const Player* Game::getPlayers() const {
    return players;
}
*/

int Game::getHeight() const {
    return height;
}

int Game::getWidth() const {
    return width;
}

int Game::getNumOfSoliders() const {
    return numOfSoliders;
}

int Game::getNumOfPlayers() const {
    return numOfPlayers;
}

void Game::setHeight(int height) {
    Game::height = height;
}

void Game::setWidth(int width) {
    Game::width = width;
}

void Game::setNumOfSoliders(int numOfSoliders) {
    Game::numOfSoliders = numOfSoliders;
}

void Game::setNumOfPlayers(int numOfPlayers) {
    Game::numOfPlayers = numOfPlayers;
}



