/*Задача 1 Напишете програма, която чете стринг от стандартния вход и
го извежда на стандартния изход с функцията gets(szBuf);*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    char a[5];
    printf("Gets input:\n");
    gets(a);
    printf("Gets output:\n");
    puts(a);
    printf("Fgets input:\n");
    fgets(a, 5, stdin);
    printf("Fgets output:\n");
    puts(a); 


    return 0;
}