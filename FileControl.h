//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_FILECONTROL_H
#define CEXR2_FILECONTROL_H
#include "Point.h"
#include "Game.h"
#include "Reporter.h"
//#include "Player.h"
#include <iostream>
#include <string>
#include <fstream>



class FileControl : public Reporter {
private:
    std::string _path;
public:
    FileControl(const std::string& path);
    ~FileControl();
    virtual void report(Game* game) override ;
   // virtual void report(Player* player);



};


#endif //CEXR2_FI