#include "Ship.h"

void battle(Vector *terranFleet, Vector *protossFleet);
int processTurn(Vector *attackingFleet, Vector *targetFleet);
void printLastShip(Ship *ship, int shipIndex);
void printVictory(enum Victory victoryFlag);
void generateTerranFleet(Vector *terranFleet);
void generateProtossFleet(Vector *protossFleet);
void shipDestoyed(Ship *ship, int shipIndex, int targetIndex);
void freeMemory(Vector *targetVector);
