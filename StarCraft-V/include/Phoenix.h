#ifndef PHOENIX_H_
#define PHOENIX_H_

#include "Ship.h"

typedef struct Phoenix{
    ProtossShip ship;
}Phoenix;

int attackPhoenix(Ship *attacker,Vector *targetFleet);
int getDMGPhoenix(Ship *ship,int dmg);
void specialAbilityPhoenix(Ship *ship);
void printPhoenixStatus(Ship *ship);
void printPhoenix(void);
Abilities createPhoenixAbilities(void);

#endif /* PHOENIX_H_ */