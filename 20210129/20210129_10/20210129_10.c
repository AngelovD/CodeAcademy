#include <stdio.h>
#include <math.h>
#include "20210129_10.h"

/*Задача 10. Напишете програма на С, която съдържа 3 функции,
изнесете прототипите им в отделен .h файл.
1. Първата функция да калкулира най-малко общо кратно на две положителни
числа.
2. Втората функция връща абсолютна стойност на числата (положителната
стойност на числата).
a. Трябва да може да приеме като параметър float и да върне float.
b. Тествайте с инт и float.
3. Напишете функция, която калкулира корен квадратен от число.
a. Проверете дали резултатът е отрицателно число и върнете -1.
b. Използвайте втората си функция, за да обърнете числото в положително и
да намерите корен квадратен от него.*/

int main(void){

    int a,b;
    float c;

    printf("Enter A value(int): ");
    scanf("%d",&a);
    printf("Enter B value(int): ");
    scanf("%d",&b);
    printf("Enter C value(float): ");
    scanf("%f",&c);

    printf("Smallest mutural of A and B: %d\n",leastDiv(a,b));
    printf("Positive value of C: %.2f\n",positiveN(c));
    printf("Square root of A: %.4lf\n",square(a));


    return 0;
}

int leastDiv(unsigned int a,unsigned int b){
    int i=1;
    while(i<=b){
        if((a*i)%b==0){
            break;
        }
        i++;
    }
    return a*i;
}

float positiveN(float a){
    if(a<0){
        a=-a;
    }
    return a;
}

double square(int a){
    if(a<0){
        a=(int)positiveN(a);
    }
    double rez = sqrt(a);
    if(rez<0){
        return -1;
    }
    return rez;
}