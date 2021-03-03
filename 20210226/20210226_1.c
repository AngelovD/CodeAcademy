/*Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.*/

#include <stdio.h>

typedef struct {
    int i;
}my_Struct;

int main(void){
    my_Struct st = {12};
    printf("%d",st.i);

    return 0;
}