/*Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък:*/

#include "list.h"

int main(void){

    init();
    add(12);
    add(13);
    add(14);
    printf("Cur: %d\n",getCur());
    printf("Start: %d\n",getStart());
    delCur();
    printf("Cur: %d\n",getCur());
    return 0;
}