#include "Weapon.h"

#ifndef RAYGUN_H
#define RAYGUN_H

/*
 * Defines the behavior of a ray gun (hitPoints = 100, ignores
 * all armor unless armor >= 100
 */
class RayGun : public Weapon {

public:

    RayGun() : Weapon("Ray Gun", 100.0) {
    }
    virtual ~RayGun() {};
    virtual double hit(double armor);

};

#endif /* RAYGUN_H */
