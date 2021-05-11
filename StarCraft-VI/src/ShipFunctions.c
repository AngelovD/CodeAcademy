#include "Ship.h"

/*.c file for universal functions across all ships*/


/*Universal free Ship function*/
int removeShip(Ship *ship){
    free(ship->ship);
    free(ship);
    if(ship||ship->ship){
        perror("Free ship");
        return 1;
    }
    return 0;
}