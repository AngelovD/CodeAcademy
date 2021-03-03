/*Задача 11. тайпдефната структура node, съдържаща един член от
тип инт и един пойнтер към тип самата структура. Заделете динамично
памет за тази структура с malloc по описания по-горе начин.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int i;
    struct Node* n;
}node;

int main(void){

    node* n;
    n=(node*)malloc(10);

    return 0;
}