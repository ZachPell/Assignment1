#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) {

    int ignore = rand() % (int)(armor + 2)/2;
    double damage = hitPoints - armor + ignore;

    if (damage < 0)
        return 0;

    return damage;
}
