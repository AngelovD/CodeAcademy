/*  Задача 11.
Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/

#include <stdio.h>

union name{
    int variable1;
    int variable2;
    char variable3;
    
};

int main(void){

    union name newvariable;
    newvariable.variable1 = -7;
    printf("%d\n",newvariable.variable1);
    newvariable.variable2 = 10;
    printf("%d\n",newvariable.variable2);
    newvariable.variable3 = 'c';
    printf("%c\n",newvariable.variable3);
    
    return 0;
}