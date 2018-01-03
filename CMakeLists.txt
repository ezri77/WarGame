cmake_minimum_required(VERSION 3.9)
project(CExr2)

set(CMAKE_CXX_STANDARD 11)

add_executable(CExr2
        Reporter.h Reportable.h
        FileControl.h FileControl.cpp
        Game.h Game.cpp
        main.cpp
        Player.h Player.cpp
        HumanPlayer.h HumanPlayer.cpp
        ComputerPlayer.h ComputerPlayer.cpp
        Actions.h
        WalkAction.h WalkAction.cpp
        Soldier.h Soldier.cpp
        Warrior.h Warrior.cpp
        WarSupporter.h
        RegularSoldier.h RegularSoldier.cpp
        SniperSoldier.h SniperSoldier.cpp
        HealerSoldier.h HealerSoldier.cpp
        GameBoard.h GameBoard.cpp
        AttackAction.h AttackAction.cpp
        FindSoldierStrategy.h
        FindByRandom.h FindByRandom.cpp
        WalkStrategy.h
        HumanWalk.h HumanWalk.cpp
        ComputerWalk.h ComputerWalk.cpp
        Warrior.h Warrior.cpp
        Actions.h
        Armor.h Armor.cpp
        BodyArmor.h BodyArmor.cpp
        HeavyWeapon.h HeavyWeapon.cpp
        M16.h M16.cpp
        Missile.h Missile.cpp
        Object.h Object.cpp
        OutputToFile.h OutputToFile.cpp
        Point.h Point.cpp
        ShieldArmor.h ShieldArmor.cpp
        Solid.h Solid.cpp
        Unsolid.h Unsolid.cpp
        Uzi.h Uzi.cpp
        OutputToFile.h OutputToFile.cpp
        RegularWeapon.h RegularWeapon.cpp
        FindIllSoldier.h FindIllSoldier.cpp
        Weapon.h Weapon.cpp
        PickAction.h PickAction.cpp
        PickStrategy.h
        PickArmor.h PickArmor.cpp

        )