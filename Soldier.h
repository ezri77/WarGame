//
// Created by ezri7 on 01/01/2018.
//

#ifndef CEXR2_SOLDIER_H
#define CEXR2_SOLDIER_H

#include "Point.h"

#include "Armor.h"
#include "Actions.h"

class Soldier {

private:
    Point _location;
    Armor _armors[2];
    const double _raduis ;
    int _lifePoints;
    const int _maxlifePoints;

private:

    enum armorType{BODY,SHILED};
public:

    virtual void play(Actions* action) = 0;

    virtual ~Soldier();

    Soldier(const Point &_location, const double _raduis, int _lifePoints, const int _maxlifePoints);

    void set_location(const Point &_location);

    void set_lifePoints(int _lifePoints);

    void setShiledArmor(Armor armor);

    void setBodyArmor(Armor armor);

    const Point &get_location() const;

    const Armor *get_armors() const;

    const double get_raduis() const;

    int get_lifePoints() const;

    const int get_maxlifePoints() const;


    ///report????

};


#endif //CEXR2_SOLDIER_H
