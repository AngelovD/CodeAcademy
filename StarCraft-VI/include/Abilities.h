#ifndef ABILITIES_H_
#define ABILITIES_H_

#include <stdio.h>
#include <stdlib.h>
#include "Defines.h"
#include "Vector.h"

/* StarShip Abilities */
typedef struct Abilities{

   /* Calculating the exact amount of damage this ship is going to deal 
      and passing it to the getDMG function of the ship it is attacking */
   int (*attack)(Ship *attacker, Vector *targetFleet);

   /* Function called in the attackShip function of the attacker that tells 
      how much damage it dealt so this function can decrement the needed values; 
      Returns if ship is destroyed*/
   int (*getDMG)(Ship *ship, int dmg);

   /* Activates the special ability of the ship */
   int (*specialAbility)(Ship *ship);

   /* Prints the ship type */
   void (*printShip)(void);

   /*Prints the ship status*/
   int (*printStatus)(Ship *ship);

   /*Frees the allocated data for the ship*/
   int (*removeShip)(Ship *ship);
}Abilities;

static int attack(Ship *attacker,Vector *targetFleet);
static int getDMG(Ship *ship,int dmg);
static int specialAbility(Ship *ship);
static int printStatus(Ship *ship);
static void printShip(void);
static Abilities createAbilities(void);

#endif /* ABILITIES_H_ */
