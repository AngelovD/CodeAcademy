#include "Carrier.h"

/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
int attackCarrier(Ship *attacker, Vector *targetFleet)
{
    droneCheckCarrier(attacker);
    int dmg = CARRIER_DAMAGE;
    int drones, exitStatus = ZERO;
    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    Carrier *carrier = (Carrier*)attacker->ship;
    for (drones = 0; drones < carrier->interceptors; drones++)
    {
        if (target->abilities.getDMG(target, dmg))
        {
            exitStatus = ONE;
            if (targetFleet->size>ONE)
            {
                target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE-ONE);
            }
            else
            {
                return exitStatus;
            }
        }
    }

    return exitStatus;
}

/* Function called in the attackShip function of the attacker that tells 
how much damage it dealt so this function can decrement the needed values; 
Returns if ship is destroyed */
int getDMGCarrier(Ship *ship, int dmg)
{   
    Carrier *carrier=(Carrier*)ship->ship;
    if(carrier->ship.shield > dmg)
    {
        carrier->ship.shield -= dmg;
        dmg = ZERO;
    }
    else
    {
        dmg -= carrier->ship.shield;
        carrier->ship.shield = ZERO;
    }
    carrier->ship.shipHp.hp-=dmg;

    if(carrier->ship.shipHp.hp < ONE)
    {
        return ONE;
    }
    return ZERO;
}

/* Checks the carrier status and how many drones it should has */
void droneCheckCarrier(Ship *ship)
{   
    Carrier *carrier=(Carrier*)ship->ship;
    if (carrier->ship.shipHp.hp < CARRIER_HEALTH)
    {
        carrier->interceptors = DAMAGED_STATUS_INTERCEPTORS;
    }
}

/* Function to activate the special ability of the ship */
void specialAbilityCarrier(Ship *ship)
{   
    Carrier *carrier=(Carrier*)ship->ship;
    carrier->ship.shield += CARRIER_SHIELD_REGENERATE_RATE;
    if (carrier->ship.shield > CARRIER_SHIELD)
    {
        carrier->ship.shield = CARRIER_SHIELD;
    }
}

/* Prints the current status of the ship */
void printCarrierStatus(Ship *ship)
{
    Carrier *carrier=(Carrier*)ship->ship;
    printf("%d health and %d shield left", carrier->ship.shipHp.hp, carrier->ship.shield);
}

/* Prints the ship type */
void printCarrier()
{
    printf("Carrier");
}

/* Adding the function pointers in the Abilities structure */
Abilities createCarrierAbilities(void)
{
    Abilities abilities = {&attackCarrier, &getDMGCarrier, &specialAbilityCarrier, &printCarrier, &printCarrierStatus,&removeShip};
    return abilities;
}

/* Creating the ship "object" with all its parameters */
Ship *createCarrier(void)
{
    Abilities abilities = createCarrierAbilities();
    Carrier *carrier = malloc(sizeof(Carrier));
    carrier->ship.shipHp.hp=CARRIER_HEALTH;
    carrier->ship.shield=CARRIER_SHIELD;
    carrier->interceptors=MAX_INTERCEPTORS;
    Ship *ship = malloc(sizeof(Ship));
    ship->abilities=abilities;
    ship->ship=carrier;
    ship->type=CARRIER;
    return ship;
}
