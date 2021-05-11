#ifndef SHIP_H_
#define SHIP_H_

#include "Abilities.h"

typedef struct BaseShip{
    int hp;
}BaseShip;

typedef struct ProtossShip{
    BaseShip shipHp;
    int shield;
}ProtossShip;

typedef struct Ship{
    void *ship;
    Abilities abilities;
    AirShipType type;
}Ship;

Ship *createCruser(void);
Ship *createViking(void);
Ship *createPhoenix(void);
Ship *createCarrier(void);

int removeShip(Ship *ship);

#endif /* SHIP_H_ */