#include "RayGun.h"

double RayGun::hit(double armor) {

    if (armor >= 100)
        return 0;
    else
        return 100;
}
