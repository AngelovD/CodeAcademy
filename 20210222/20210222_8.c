/*Задача 8.
Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/

#include <stdio.h>
#include <string.h>

union sU{
    int m_i;
    char string[50];
};

enum stringC{
    VAR_INT,
    VAR_STRING
};

void printUnion(union sU *sU,enum stringC *s);

int main(void){

    union sU sU;
    strcpy(sU.string,"Hello world");
    enum stringC s=VAR_STRING;
    printUnion(&sU,&s);

    return 0;
}

void printUnion(union sU *sU,enum stringC *s){
    switch(*s){
        case VAR_STRING:
            printf("%s",sU->string);
            break;
        case VAR_INT:
            printf("%d",sU->m_i);
            break;
        default:
            printf("Something went wrong");
            break;
    }
}