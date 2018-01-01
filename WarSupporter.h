//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_WARSUPPORTER_H
#define CEXR2_WARSUPPORTER_H
#include "Soldier.h"
#include "Actions.h"

class WarSupporter : public Soldier{
public:
    virtual void play(Actions* action) = 0;

    WarSupporter(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints);

    virtual ~WarSupporter();
};


#endif //CEXR2_WARSUPPORTER_H

WarSupporter::~WarSupporter() {

}

WarSupporter::WarSupporter(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints)
        : Soldier(_location, _raduis, _lifePoints, _maxlifePoints) {}
