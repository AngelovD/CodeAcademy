#include "Battle.h"


/* The main battle function that handles the battle and its result */
void battle(Vector *terranFleet, Vector *protossFleet)
{

    Victory victoryFlag;

    while (1)
    {
        if (processTurn(terranFleet, protossFleet))
        {
            victoryFlag = TERRAN_VICTORY;
            break;
        }
        printf("Last Protoss AirShip");
        printShip((Ship*)vectorGet(protossFleet,protossFleet->size-ONE), protossFleet->size-ONE);

        if (processTurn(protossFleet, terranFleet))
        {
            victoryFlag = PROTOSS_VICTORY;
            break;
        }
        printf("Last Terran AirShip");
        printShip((Ship*)vectorGet(terranFleet,terranFleet->size-ONE), terranFleet->size-ONE);
    }
    printVictory(victoryFlag);
}

/* Handles the actual turns of the battle */
int processTurn(Vector *attackingFleet, Vector *targetFleet)
{
    Ship *attacker;
    int i;
    for(i=0;i<attackingFleet->size;i++)
    {
        attacker = vectorGet(attackingFleet,i);
        if (attacker->abilities.attack(attacker, targetFleet))
        {
            shipDestoyed(attacker, i, targetFleet->size-ONE);
            attacker->abilities.removeShip((Ship*)vectorGet(targetFleet,targetFleet->size-ONE));
            vectorPop(targetFleet);
            if (vectorIsEmpty(targetFleet))
            {
                return ONE;
            }
        }
        attacker->abilities.specialAbility(attacker);
    }
    return ZERO;
}

/* Prints the ship ID and its status */
void printShip(Ship *ship, int shipIndex)
{
    printf(" with ID: %d has ", shipIndex);
    ship->abilities.printStatus(ship);
    printf("\n");
}

/* Prints the final result of the battle */
void printVictory(Victory victoryFlag)
{
    switch (victoryFlag)
    {
    case PROTOSS_VICTORY:
        printf("PROTOSS has won!\n");
        break;
    case TERRAN_VICTORY:
        printf("TERRAN has won!\n");
        break;
    default:
        printf("Something went wrong!\n");
        break;
    }
    fflush(stdout);
}

/* Prints the destroyer ship with its ID and the target ID */
void shipDestoyed(Ship *ship, int shipIndex, int targetIndex)
{
    ship->abilities.printShip();
    printf(" with ID: %d killed enemy airship with ID: %d\n", shipIndex, targetIndex);
}
