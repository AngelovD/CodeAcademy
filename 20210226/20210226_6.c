/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/

#include <stdio.h>

typedef struct{
    int i;
    char string[40];
}key_t;

int main(void){

    key_t key={1,"jaja"};
    printf("%s",key.string);

    return 0;
}