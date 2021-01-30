#include <stdio.h>

/* Задача 3. Напишете функция, която връща резултат (а+в)*4.*/

double calc(double a, double b);

int main(void){

    double a, b;

    printf("Enter A value: ");
    scanf("%lf",&a);
    printf("Enter B value: ");
    scanf("%lf",&b);
    printf("(A + B)*4= %.4lf",calc(a,b));

    return 0;
}

double calc(double a, double b){
    return (a+b)*4;
}