#include <stdio.h>

int main(){

    int iX = 13;
    int iY = 44;
    int iResult = 0;

    iResult = iX - iY;
    printf("%d - %d = %d \n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d = %d \n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d / %d Remainder: %d\n", iY, iX, iResult);

    float fX = 12.2;
    float fY = 41.51;
    
    float fResult = fX + fY;
    printf("%.2f + %.2f = %.2f \n", fX, fY, fResult);
    fResult = fY / fX;
    printf("%.2f / %.2f = %f \n", fY, fX, fResult);

    return 0;
}