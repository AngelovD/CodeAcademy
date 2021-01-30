#include <stdio.h>

/*Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.*/

extern const double c_dPi;

double circle(double r);

int main(void){

    double rez=circle(4.2);
    printf("Area is: %.4lf",rez);

    return 0;
}

double circle(double r){
    return r*r*c_dPi;
}

const double c_dPi=3.14;