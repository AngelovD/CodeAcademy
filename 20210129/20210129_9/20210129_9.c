#include <stdio.h>
#include "20210129_9.h"

/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
Main вика Ф1;
Ф1 вика Ф 2;
Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл.*/

int main(void){

    plus();

    return 0;
}

void plus(void){
    int a,b;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("A+B= %d\n", a+b);
    minus(a,b);
}

void minus(int a, int b){

    printf("A-B= %d\n", a-b);
    multiply(a,b);
}

void multiply(int a, int b){
    printf("A*B= %d\n",a*b);
}