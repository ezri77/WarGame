//
// Created by ezri7 on 01/01/2018.
//

#include "FileControl.h"


FileControl::FileControl(const std::string& path): _path (path){
 std::cout << "FileControl inited" << std::endl ;
}

FileControl::~FileControl()
{

}

void FileControl::report(Game* game)
{
std::cout << "The visitor succeeded" << std::endl ;
}
/*
void FileControl::report(Player* player)
{

}*/
