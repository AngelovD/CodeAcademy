#include "BattleCruser.h"

/* Creating the ship "object" with all its parameters */
Ship *createCruser(void)
{
    Abilities abilities = createAbilities();
    BattleCruser *cruser = malloc(sizeof(BattleCruser));
    if(!cruser){
        perror("Failed to allocate memory for cruser");
        return NULL;
    }
    cruser->shipHp.hp=BATTLE_CRUSER_HEALTH;
    cruser->round=BATTLE_CRUSER_START_ROUND;
    Ship *ship = malloc(sizeof(Ship));
    if(!ship){
        free(cruser);
        perror("Failed to allocate memory for ship at cruser");
        return NULL;
    }
    ship->abilities=abilities;
    ship->ship=cruser;
    ship->type=BATTLE_CRUSER;
    return ship;
}





/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
static int attack(Ship *attacker,Vector *targetFleet)
{
    int dmg = BATTLE_CRUSER_DAMAGE;
    int multiplier = DEFAULT_CRUSER_MULTIPLIER;

    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    BattleCruser *cruser = (BattleCruser*)attacker->ship;
    if(!target||!cruser){
        perror("Failed to cast at attack of cruser");
        return -1;
    }
    if (cruser->round % YAMATO_CANNON_LOADING_TURNS == ZERO)
    {
        multiplier = YAMATO_CANNON_MULTIPLIER;
    }

    if (target->abilities.getDMG(target, dmg * multiplier))
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
    BattleCruser *cruser=(BattleCruser*)ship->ship;
    if(!cruser){
        perror("Failed to cast at getDMG of cruser");
        return -1;
    }
    cruser->shipHp.hp -= dmg;
    if (cruser->shipHp.hp < ONE)
    {
        return ONE;
    }
    return ZERO;
}

/* Function to activate the special ability of the ship */
static int specialAbility(Ship *ship)
{
    BattleCruser *cruser=(BattleCruser*)ship->ship;
    if(!cruser){
        perror("Failed to cast at special ability of cruser");
        return 1;
    }
    cruser->round++;
    return 0;
}

/* Prints the current status of the ship */
static int printStatus(Ship *ship)
{
    BattleCruser *cruser=(BattleCruser*)ship->ship;
    if(!cruser){
        perror("Failed to cast at print status of cruser");
        return 1;
    }
    printf("%d health left", cruser->shipHp.hp);
    return 0;
}

/* Prints the ship type */
static void printShip()
{
    printf("BattleCruser");
}

/* Adding the function pointers in the Abilities structure */
static Abilities createAbilities(void)
{
    Abilities abilities = {&attack, &getDMG, &specialAbility, &printShip,&printStatus,&removeShip};
    return abilities;
}

