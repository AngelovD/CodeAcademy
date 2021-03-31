#ifndef CARRIER_H_
#define CARRIER_H_

#include "Ship.h"

typedef struct Carrier{
    ProtossShip ship;
    int interceptors;
}Carrier;


int attackCarrier(Ship *attacker,Vector *targetFleet);
int getDMGCarrier(Ship *ship,int dmg);
void specialAbilityCarrier(Ship *ship);
void printCarrierStatus(Ship *ship);
void printCarrier(void);
void droneCheckCarrier(Ship *ship);
Abilities createCarrierAbilities(void);

#endif /* CARRIER_H_ */