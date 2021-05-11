#include "Viking.h"

/* Creating the ship "object" with all its parameters */
Ship *createViking(void)
{
    Abilities abilities = createAbilities();
    Viking *viking = malloc(sizeof(Viking));
    if(!viking){
        perror("Failed to allocate memory for viking");
        return NULL;
    }
    viking->shipHp.hp=VIKING_HEALTH;
    Ship *ship = malloc(sizeof(Ship));
    if(!ship){
        free(viking);
        perror("Failed to allocate memory for ship at viking");
        return NULL;
    }
    ship->abilities=abilities;
    ship->ship=viking;
    ship->type=VIKING;
    return ship;
}





/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
static int attack(Ship *attacker,Vector *targetFleet)
{

    int dmg;
    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    if(!target){
        perror("Failed to cast at attack of viking");
        return -1;
    }
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
static int getDMG(Ship *ship, int dmg)
{   
    Viking *viking=(Viking*)ship->ship;
    if(!viking){
        perror("Failed to cast at getDMG of viking");
        return -1;
    }
    viking->shipHp.hp -= dmg;
    if (viking->shipHp.hp < ONE)
    {
        return ONE;
    }
    return ZERO;
}

/* Function to activate the special ability of the ship */
static int specialAbility(Ship *ship)
{ /* Can be implemented in the future */
    return 0;
}

/* Prints the current status of the ship */
static int printStatus(Ship *ship)
{
    Viking *viking=(Viking*)ship->ship;
    if(!viking){
        perror("Failed to cast at print status of viking");
        return 1;
    }
    printf("%d health left", viking->shipHp.hp);
    return 0;
}

/* Prints the ship type */
static void printShip()
{
    printf("Viking");
}


/* Adding the function pointers in the Abilities structure */
static Abilities createAbilities(void)
{
    Abilities abilities = {&attack, &getDMG, &specialAbility, &printShip,&printStatus,&removeShip};
    return abilities;
}



