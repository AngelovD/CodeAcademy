#include "Phoenix.h"

/* Creating the ship "object" with all its parameters */
Ship *createPhoenix(void)
{
    Abilities abilities = createAbilities();
    Phoenix *phoenix = malloc(sizeof(Phoenix));
    if(!phoenix){
        perror("Failed to allocate memory for phoenix");
        return NULL;
    }
    phoenix->ship.shipHp.hp=PHOENIX_HEALTH;
    phoenix->ship.shield=PHOENIX_SHIELD;
    Ship *ship = malloc(sizeof(Ship));
    if(!ship){
        free(phoenix);
        perror("Failed to allocate memory for ship at phoenix");
        return NULL;
    }
    ship->abilities=abilities;
    ship->ship=phoenix;
    ship->type=PHOENIX;
    return ship;
}





/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
static int attack(Ship *attacker,Vector *targetFleet)
{
    int dmg = PHOENIX_DAMAGE;
    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    if(!target){
        perror("Failed to cast at attack of phoenix");
        return -1;
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
static int getDMG(Ship *ship, int dmg)
{   
    Phoenix *phoenix=(Phoenix*)ship->ship;
    if(!phoenix){
        perror("Failed to cast at getDMG of phoenix");
        return -1;
    }
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
static int specialAbility(Ship *ship)
{
    Phoenix *phoenix=(Phoenix*)ship->ship;
    if(!phoenix){
        perror("Failed to cast at special ability of phoenix");
        return 1;
    }
    phoenix->ship.shield += PHOENIX_SHIELD_REGENERATE_RATE;
    if (phoenix->ship.shield > PHOENIX_SHIELD)
    {
        phoenix->ship.shield = PHOENIX_SHIELD;
    }
    return 0;
}

/* Prints the current status of the ship */
static int printStatus(Ship *ship)
{
    Phoenix *phoenix=(Phoenix*)ship->ship;
    if(!phoenix){
        perror("Failed to cast at print status of phoenix");
        return 1;
    }
    printf("%d health and %d shield left", phoenix->ship.shipHp.hp, phoenix->ship.shield);
    return 0;
}

/* Prints the ship type */
static void printShip()
{
    printf("Phoenix");
}


/* Adding the function pointers in the Abilities structure */
static Abilities createAbilities(void)
{
    Abilities abilities = {&attack, &getDMG, &specialAbility, &printShip,&printStatus,&removeShip};
    return abilities;
}

