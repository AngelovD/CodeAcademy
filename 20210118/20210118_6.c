#include <stdio.h>

int main(){

    int i = 0, j = 0;
    
    printf("i = %d, j = %d\n", i, j);
    printf("j=i++: %d\n", j = i++);   //j=0
    printf("i = %d, j = %d\n", i, j); // i=1, j=0
    printf("j = ++i: %d\n", j = ++i); // j=2
    printf("i = %d, j = %d\n", i, j); //i=2, j=2
    printf("i--: %d\n", i--);         // i=2
    printf("i = %d, j = %d\n", i, j); // i=1, j=2

    return 0;
}
