#include <stdio.h>

/*Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата.*/


extern const double c_dPi;

double area(void);
double circle(double r);

int main(void){

    double rez=area();
    printf("Area is: %.4lf",rez);

    return 0;
}

double circle(double r){
    return r*r*c_dPi;
}

double area(void){
    double r;

    printf("Enter r: ");
    scanf("%lf",&r);

    return circle(r);
}

const double c_dPi=3.14;