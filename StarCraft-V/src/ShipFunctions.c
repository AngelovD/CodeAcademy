#include "Ship.h"

/*.c file for universal functions across all ships*/


/*Universal free Ship function*/
void removeShip(Ship *ship){
    free(ship->ship);
    free(ship);   
}