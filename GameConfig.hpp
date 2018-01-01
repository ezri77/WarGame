#ifndef GAME_CONFIG
#define GAME_CONFIG
#include <iostream>
#include <string>
#include <fstream>
#include "Object.h"
#include "Point2D"

class GameConfig{
private:
    int _hegiht;
    int _width;
    int _numOfPlayers;
    int _solidersNum;
    Player Players[_numOfPlayers];
    
    std::vector<Object> proprties;
    
public:
    SoliderConfig(std::string filePath);
    ~SoliderConfig();
    Point2D getNextStep();

}



#endif