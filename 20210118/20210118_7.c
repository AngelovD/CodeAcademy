#include <stdio.h>

int main(void){

    int nA = 1;
    int nB = (nA==1 ? 12 : 0);
    printf("A value is: %d\n", nA);
    printf("B value is: %d\n", nB);
    
    scanf("%d",&nA);
    int nC = (nA>nB ? nA : nB);
    printf("A value is: %d\n", nA);
    printf("B value is: %d\n", nB);
    printf("Bigger value is: %d\n", nC);

    return 0;
}