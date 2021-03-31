#include "BattleCruser.h"

/* Calculating the exact amount of damage this ship is going to deal 
and passing it to the getDMG function of the ship it is attacking */
int attackCruser(Ship *attacker,Vector *targetFleet)
{
    int dmg = BATTLE_CRUSER_DAMAGE;
    int multiplier = DEFAULT_CRUSER_MULTIPLIER;

    Ship *target = (Ship*)vectorGet(targetFleet,targetFleet->size-ONE);
    BattleCruser *cruser = (BattleCruser*)attacker->ship;
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
int getDMGCruser(Ship *ship, int dmg)
{
    BattleCruser *cruser=(BattleCruser*)ship->ship;
    cruser->shipHp.hp -= dmg;
    if (cruser->shipHp.hp < ONE)
    {
        return ONE;
    }
    return ZERO;
}

/* Function to activate the special ability of the ship */
void specialAbilityCruser(Ship *ship)
{
    BattleCruser *cruser=(BattleCruser*)ship->ship;
    cruser->round++;
}

/* Prints the current status of the ship */
void printCruserStatus(Ship *ship)
{
    BattleCruser *cruser=(BattleCruser*)ship->ship;
    printf("%d health left", cruser->shipHp.hp);
}

/* Prints the ship type */
void printCruser()
{
    printf("BattleCruser");
}

/* Adding the function pointers in the Abilities structure */
Abilities createbattlecruserAbilities(void)
{
    Abilities abilities = {&attackCruser, &getDMGCruser, &specialAbilityCruser, &printCruser,&printCruserStatus,&removeShip};
    return abilities;
}

/* Creating the ship "object" with all its parameters */
Ship *createCruser(void)
{
    Abilities abilities = createbattlecruserAbilities();
    BattleCruser *cruser = malloc(sizeof(BattleCruser));
    cruser->shipHp.hp=BATTLE_CRUSER_HEALTH;
    cruser->round=BATTLE_CRUSER_START_ROUND;
    Ship *ship = malloc(sizeof(Ship));
    ship->abilities=abilities;
    ship->ship=cruser;
    ship->type=BATTLE_CRUSER;
    return ship;
}