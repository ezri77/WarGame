#ifndef PLAYER_CONFIG
#define PLAYER_CONFIG
#include "FileControl.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include "Point.h"
#include <vector>

class PlayerConfig: public FileControl{
private:
   // std::vector<std::vector<Point>> solidersSteps;
    int stepNum ;  
        

public:
    
    //ctor
    PlayerConfig(std::string filePath);
    
    //detor    
    ~PlayerConfig();
    
    //read text from file 
    virtual void readFile();
    
    /*//get the solider index and return Point of his next step
    Point getNextStep(int soliderIndex);
    */

};



#endif