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

