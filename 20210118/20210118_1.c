#include <stdio.h>

int main(void){

    int x= 10;
    int y = 10;
    int true, false;

    true = x==y;
    false = x!=y;

    printf("True = %d\n", true);
    printf("False = %d\n", false);


    return 0;
}