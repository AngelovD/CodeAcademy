#include <stdio.h>

int main(){


    unsigned char kar = 3, kemp = 3;
    float karCen = 90;
    float kemoCen = 100;
    float fowedMoney=0;

    unsigned char rez;

    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");

    scanf("%d", &rez);
    if(rez==1){
        fowedMoney=90;
    }else if(rez==2){
        fowedMoney = 100;
    }else{
        printf("Nevaliden input opitaite pak\n");
        printf("Ako zelaete karavana natisnete 1\n");
        printf("Ako zelaete kemper natisnete 2\n");
    }

    printf("Dyljima suma: %f\n", fowedMoney);

    printf("6te jelaete li o6te ne6to?\n");

    return 0;

}