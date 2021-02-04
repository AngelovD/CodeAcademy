#include <stdio.h>

/*Задача 6. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */

void my_swap(int *a, int *b);

int main(void){

    int a=5,b=3;
    printf("Old: %d    %d\n",a,b);
    my_swap(&a,&b);
    printf("New: %d    %d\n",a,b);
    return 0;
}

void my_swap(int *a, int *b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}