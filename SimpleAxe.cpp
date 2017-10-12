#include "SimpleAxe.h"

double SimpleAxe::hit(double armor) {

    if (armor > 0 && armor < 20) {
        return hitPoints;
    }

    return hitPoints - armor;
}
