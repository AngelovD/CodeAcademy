#include <stdio.h>

/*Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/

double triangleArea(double a, double b);
double rectangleArea(double a, double b);

int main(void){

    double a, b;

    printf("Enter A value: ");
    scanf("%lf",&a);
    printf("Enter B value: ");
    scanf("%lf",&b);
    printf("Triangle area is: %.4lf\n", triangleArea(a,b));
    printf("Rectangle area is: %.4lf\n", rectangleArea(a,b));

    return 0;
}

double triangleArea(double a, double b){
    return a*b/2;
}

double rectangleArea(double a, double b){
    return triangleArea(a,b)*2;
}