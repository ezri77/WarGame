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
/**
 * read Game configurations from initFileGame
 * and init numOfPlayers,numOfSoldiers,players and solid objects
 */
}

void FileControl::report(Player* player)
{
 /**
 * read human Player steps configurations from initFileGame
  * and put in steps vector the points steps
  *
 */
}
