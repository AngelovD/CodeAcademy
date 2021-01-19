#include <stdio.h>
int main(){

    int iA = 13;
    int *pValue = NULL;
    pValue = &iA;       

    printf("\nAddress of variable iA is: %p\n", pValue);
    printf("\nValue of variable iA is: %d\n", *pValue);
    
    return 0;
}