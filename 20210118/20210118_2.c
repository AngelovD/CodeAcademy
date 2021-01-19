#include <stdio.h>

int main(void){

    int x= 10;
    int y = 10;
    int z=10;

    int true = x==y+(z<y)!=20;

    printf("True = %d\n", true);


    return 0;
}