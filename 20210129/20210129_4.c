#include <stdio.h>

/*Задача 4. Напишете функция, която връща резултат a*2 + b*c.*/

double calc(double a, double b, double c);

int main(void){

    double a, b, c;

    printf("Enter A value: ");
    scanf("%lf",&a);
    printf("Enter B value: ");
    scanf("%lf",&b);
    printf("Enter C value: ");
    scanf("%lf",&c);
    printf("A * 2 + B * C = %.4lf",calc(a,b,c));

    return 0;
}

double calc(double a, double b, double c){
    return a*2+b*c;
}