#ifndef BATTLECRUSER_H_
#define BATTLECRUSER_H_

#include "Ship.h"

typedef struct BattleCruser{
    BaseShip shipHp;
    size_t round;
}BattleCruser;

int attackCruser(Ship *attacker,Vector *targetFleet);
int getDMGCruser(Ship *ship,int dmg);
void specialAbilityCruser(Ship *ship);
void printCruserStatus(Ship *ship);
void printCruser(void);
Abilities createCruserAbilities(void);

#endif /* BATTLECRUSER_H_ */