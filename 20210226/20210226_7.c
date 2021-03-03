/*Задача 7. Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.
*/

#include <stdio.h>

typedef struct{
    int i;
    char string[40];
}key_t;

int main(void){

    key_t key[]={{0,"int"},{0,"char"},{0,"long"},{0,"short"},{0,"float"},{0,"double"},{0,"case"},{0,"if"},{0,"else"},{0,"switch"},{0,"case"},
    {0,"default"},{0,"break"},{0,"for"},{0,"while"},{0,"do"},{0,"goto"},{0,"auto"},{0,"signed"},{0,"const"},{0,"extern"},{0,"unsigned"},{0,"register"},{0,"return"},
    {0,"continue"},{0,"enum"},{0,"sizeof"},{0,"struct"},{0,"typedef"},{0,"union"},{0,"volatile"}};
    printf("%s",key[12].string);

    return 0;
}