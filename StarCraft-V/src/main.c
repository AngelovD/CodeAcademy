#include "Battle.h"

int main()
{   
    Vector protoss;
    Vector terran;
    vectorInit(&terran,ONE);
    vectorInit(&protoss,ONE);
    Vector *protossFleet=&protoss;
    Vector *terranFleet=&terran;
    generateTerranFleet(terranFleet);
    generateProtossFleet(protossFleet);
    battle(terranFleet,protossFleet);
    freeMemory(terranFleet);
    freeMemory(protossFleet);
    return 0;
}

/* Fills the terran fleet Vector */
void generateTerranFleet(Vector *terranFleet)
{
    char inputChar;

    while ((inputChar = getchar()) != '\n')
    {
        if (inputChar == 'b')
        {
            vectorPush(terranFleet, createCruser());
        }
        else if (inputChar == 'v')
        {
            vectorPush(terranFleet, createViking());
        }
    }
}

/* Fills the protoss fleet Vector */
void generateProtossFleet(Vector *protossFleet)
{
    char inputChar;

    while ((inputChar = getchar()) != '\n')
    {
        if (inputChar == 'c')
        {
            vectorPush(protossFleet,createCarrier());
        }
        else if (inputChar == 'p')
        {
            vectorPush(protossFleet,createPhoenix());
        }
    }
}

/*Prevents memory leaks...(we hope so)*/
void freeMemory(Vector *targetVector){
    if(vectorIsEmpty(targetVector)){
        vectorFree(targetVector);
    }else{
        int i;
        for(i=0;i<targetVector->size;i++){
            Ship *ship=(Ship*)vectorGet(targetVector,i);
            ship->abilities.removeShip(ship);
        }
        vectorFree(targetVector);
    }
}