cmake_minimum_required(VERSION 3.9)
project(CExr2)

set(CMAKE_CXX_STANDARD 11)

add_executable(CExr2 Reporter.h Reportable.h FileControl.h FileControl.cpp  Game.h Game.cpp  main.cpp Player.cpp Player.h Actions.h WalkAction.cpp WalkAction.h Soldier.cpp Soldier.h Warrior.cpp Warrior.h WarSupporter.h RegularSoldier.cpp RegularSoldier.h SniperSoldier.cpp SniperSoldier.h HealerSoldier.cpp HealerSoldier.h GameBoard.cpp GameBoard.h AttackAction.cpp AttackAction.h)