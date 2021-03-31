#include "Viking.h"

/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
int attackViking(Ship *attacker,Vector *targetFleet)
{

    int dmg;
    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    if (target->type == PHOENIX)
    {
        dmg = VIKING_DAMAGE_VS_PHOENIX;
    }
    else
    {
        dmg = VIKING_DAMAGE;
    }
    if (target->abilities.getDMG(target, dmg))
    {
        return ONE;
    }
    return ZERO;
}

/* Function called in the attackShip function of the attacker that tells 
how much damage it dealt so this function can decrement the needed values; 
Returns if ship is destroyed */
int getDMGViking(Ship *ship, int dmg)
{   
    Viking *viking=(Viking*)ship->ship;
    viking->shipHp.hp -= dmg;
    if (viking->shipHp.hp < ONE)
    {
        return ONE;
    }
    return ZERO;
}

/* Function to activate the special ability of the ship */
void specialAbilityViking(Ship *ship)
{ /* Can be implemented in the future */
}

/* Prints the current status of the ship */
void printVikingStatus(Ship *ship)
{
    Viking *viking=(Viking*)ship->ship;
    printf("%d health left", viking->shipHp.hp);
}

/* Prints the ship type */
void printViking()
{
    printf("Viking");
}


/* Adding the function pointers in the Abilities structure */
Abilities createVikingAbilities(void)
{
    Abilities abilities = {&attackViking, &getDMGViking, &specialAbilityViking, &printViking,&printVikingStatus,&removeShip};
    return abilities;
}

/* Creating the ship "object" with all its parameters */
Ship *createViking(void)
{
    Abilities abilities = createVikingAbilities();
    Viking *viking = malloc(sizeof(Viking));
    viking->shipHp.hp=VIKING_HEALTH;
    Ship *ship = malloc(sizeof(Ship));
    ship->abilities=abilities;
    ship->ship=viking;
    ship->type=VIKING;
    return ship;
}

