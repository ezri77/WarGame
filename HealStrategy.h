//
// Created by ezri7 on 03/01/2018.
//

#ifndef CEXR2_HEALSTRAYEGY_H
#define CEXR2_HEALSTRAYEGY_H

class HealStategy{
public:
    virtual Soldier& find(std::vector<Player*> players,const Soldier& Attacker) = 0 ;

};

#endif //CEXR2_HEALSTRAYEGY_H
