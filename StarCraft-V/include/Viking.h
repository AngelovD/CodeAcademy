#ifndef VIKING_H_
#define VIKING_H_

#include "Ship.h"

typedef struct Viking{
    BaseShip shipHp;
}Viking;

int attackViking(Ship *attacker,Vector *targetFleet);
int getDMGViking(Ship *ship,int dmg);
void specialAbilityViking(Ship *ship);
void printVikingStatus(Ship *ship);
void printViking(void);
Abilities createVikingAbilities(void);

#endif /* VIKING_H_ */