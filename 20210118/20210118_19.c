#include <stdio.h>

int main(void){

    int A = 0, B = 0;

    printf("A= %d, B= %d\n",A,B);

    int res;

    res = !( A && B );
    printf("!(A&&B)= %d\n",res);

    res = !A || !B;
    printf("!A || !B= %d\n",res);

    res = !( A || B );
    printf("!( A || B )= %d\n",res);

    res = !A && !B;
    printf("!A && !B= %d\n",res);

    printf("!(A&&B)=!A || !B\n");
    printf("!( A || B )=!A && !B");

    return 0;
}