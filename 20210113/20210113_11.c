#include <stdio.h>

int main(){

    float fTomatoPrice = 4.5, fbra6 = 1.8, fkMl = 0.5, ficeCr = 0.6, fbb = 1.5, fbl = 0.15;

    float fTomatoWeight, fbra6Amm, fbbAmm;

    unsigned int ikMlAmm,iiceCrAmm, iblAmm;


    printf("Welcome to our store we offer tomatoes.\n");
    printf("How much would you like? ");
    scanf("%f",&fTomatoWeight);
    float fTomatoTotal = fTomatoWeight*fTomatoPrice;

    printf("%.2f", fTomatoTotal);



    return 0;
}