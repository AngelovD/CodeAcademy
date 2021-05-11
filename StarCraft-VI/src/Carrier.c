#include "Carrier.h"

/* Creating the ship "object" with all its parameters */
Ship *createCarrier(void)
{
    Abilities abilities = createAbilities();
    Carrier *carrier = malloc(sizeof(Carrier));
    if(!carrier){
        perror("Failed to allocate memory for carrier");
        return NULL;
    }
    carrier->ship.shipHp.hp=CARRIER_HEALTH;
    carrier->ship.shield=CARRIER_SHIELD;
    carrier->interceptors=MAX_INTERCEPTORS;
    Ship *ship = malloc(sizeof(Ship));
    if(!ship){
        free(carrier);
        perror("Failed to allocate memory for ship at carrier");
        return NULL;
    }
    ship->abilities=abilities;
    ship->ship=carrier;
    ship->type=CARRIER;
    return ship;
}





static int droneCheck(Ship *ship);
/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
static int attack(Ship *attacker, Vector *targetFleet)
{
    if(droneCheck(attacker)){
        perror("Drone check failed");
        return -1;
    }
    int dmg = CARRIER_DAMAGE;
    int drones, exitStatus = ZERO;
    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    Carrier *carrier = (Carrier*)attacker->ship;
    if(!target||!carrier){
        perror("Failed to cast at attack of carrier");
        return -1;
    }
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
static int getDMG(Ship *ship, int dmg)
{   
    Carrier *carrier=(Carrier*)ship->ship;
    if(!carrier){
        perror("Failed to cast at getDMG of carrier");
        return -1;
    }
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
static int droneCheck(Ship *ship)
{   
    Carrier *carrier=(Carrier*)ship->ship;
    if(!carrier){
        perror("Failed to cast at dronecheck of carrier");
        return 1;
    }
    if (carrier->ship.shipHp.hp < CARRIER_HEALTH)
    {
        carrier->interceptors = DAMAGED_STATUS_INTERCEPTORS;
    }
    return 0;
}

/* Function to activate the special ability of the ship */
static int specialAbility(Ship *ship)
{   
    Carrier *carrier=(Carrier*)ship->ship;
    if(!carrier){
        perror("Failed to cast at special ability of carrier");
        return 1;
    }
    carrier->ship.shield += CARRIER_SHIELD_REGENERATE_RATE;
    if (carrier->ship.shield > CARRIER_SHIELD)
    {
        carrier->ship.shield = CARRIER_SHIELD;
    }
    return 0;
}

/* Prints the current status of the ship */
static int printStatus(Ship *ship)
{
    Carrier *carrier=(Carrier*)ship->ship;
    if(!carrier){
        perror("Failed to cast at print status of carrier");
        return 1;
    }
    printf("%d health and %d shield left", carrier->ship.shipHp.hp, carrier->ship.shield);
    return 0;
}

/* Prints the ship type */
static void printShip()
{
    printf("Carrier");
}

/* Adding the function pointers in the Abilities structure */
static Abilities createAbilities(void)
{
    Abilities abilities = {&attack, &getDMG, &specialAbility, &printShip, &printStatus,&removeShip};
    return abilities;
}