//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_OUTPUTTOFILE_H
#define CEXR2_OUTPUTTOFILE_H


#include <iostream>
#include <string>
#include <fstream>
#include "Game.h"
#include "Player.h"

class OutputToFile  : public Reporter {

private:
    std::string _path;
public:
    OutputToFile(const std::string& path);
    ~OutputToFile();
    virtual void report(Game* game) override ;
    virtual void report(Player* player);
};


#endif //CEXR2_OUTPUTTOFILE_H
