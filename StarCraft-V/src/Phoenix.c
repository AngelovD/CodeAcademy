#include "Phoenix.h"

/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
int attackPhoenix(Ship *attacker,Vector *targetFleet)
{
    int dmg = PHOENIX_DAMAGE;
    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    if (target->abilities.getDMG(target, dmg))
    {
        return ONE;
    }
    return ZERO;
}

/* Function called in the attackShip function of the attacker that tells 
how much damage it dealt so this function can decrement the needed values; 
Returns if ship is destroyed */
int getDMGPhoenix(Ship *ship, int dmg)
{   
    Phoenix *phoenix=(Phoenix*)ship->ship;
    if (phoenix->ship.shield > dmg)
    {
        phoenix->ship.shield -= dmg;
        dmg = ZERO;
    }
    else
    {
        dmg -= phoenix->ship.shield;
        phoenix->ship.shield = ZERO;
    }
    phoenix->ship.shipHp.hp -= dmg;
    if (phoenix->ship.shipHp.hp < ONE)
    {
        return ONE;
    }
    return ZERO;
}

/* Function to activate the special ability of the ship */
void specialAbilityPhoenix(Ship *ship)
{
    Phoenix *phoenix=(Phoenix*)ship->ship;
    phoenix->ship.shield += PHOENIX_SHIELD_REGENERATE_RATE;
    if (phoenix->ship.shield > PHOENIX_SHIELD)
    {
        phoenix->ship.shield = PHOENIX_SHIELD;
    }
}

/* Prints the current status of the ship */
void printPhoenixStatus(Ship *ship)
{
    Phoenix *phoenix=(Phoenix*)ship->ship;
    printf("%d health and %d shield left", phoenix->ship.shipHp.hp, phoenix->ship.shield);
}

/* Prints the ship type */
void printPhoenix()
{
    printf("Phoenix");
}


/* Adding the function pointers in the Abilities structure */
Abilities createPhoenixAbilities(void)
{
    Abilities abilities = {&attackPhoenix, &getDMGPhoenix, &specialAbilityPhoenix, &printPhoenix,&printPhoenixStatus,&removeShip};
    return abilities;
}

/* Creating the ship "object" with all its parameters */
Ship *createPhoenix(void)
{
    Abilities abilities = createPhoenixAbilities();
    Phoenix *phoenix = malloc(sizeof(Phoenix));
    phoenix->ship.shipHp.hp=PHOENIX_HEALTH;
    phoenix->ship.shield=PHOENIX_SHIELD;
    Ship *ship = malloc(sizeof(Ship));
    ship->abilities=abilities;
    ship->ship=phoenix;
    ship->type=PHOENIX;
    return ship;
}
