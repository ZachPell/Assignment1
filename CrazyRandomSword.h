#include <string>
#include "Weapon.h"
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy Random Sword", std::rand() % 91 + 10) {
    }
    virtual ~CrazyRandomSword() {};
    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */
