#include <stdio.h>

int main(){

    
    double dA = 4.9876543;
    long double dB = 7.123456789012345678890;
    long double dC = 18398458438583853.28;
    long double dD = 18398458438583853.39875937284928422;

    printf("%.7f\n",dA);
    //printf("%17.2f\n",dC);


    // printf dava samo 0
    __mingw_printf("%.22Lf\n",dB);
    __mingw_printf("%17.2Lf\n",dC);
    __mingw_printf("%17.17Lf\n",dD);

    return 0;
}