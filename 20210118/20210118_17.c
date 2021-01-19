#include <stdio.h>

int main(void){

    unsigned long long int A = 1;
    printf("A= %d\n",A);
    
    A ^= A << 13;
    printf("A= %Ld\n",A);
    A ^= A >> 17;
    printf("A= %Ld\n",A);
    A ^= A << 5;
    printf("A= %Ld\n",A);

    return 0;
}