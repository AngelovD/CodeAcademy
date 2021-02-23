/*Задача 9.
Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    strcpy(sU.string,"12");
    enum stringC s=VAR_STRING;
    printUnion(&sU,&s);
    printUnion(&sU,&s);
    printUnion(&sU,&s);

    return 0;
}

void printUnion(union sU *sU,enum stringC *s){
    switch(*s){
        case VAR_STRING:
            printf("S: %s\n",sU->string);
            sU->m_i=atoi(sU->string);
            *s=VAR_INT;
            break;
        case VAR_INT:
            printf("D: %d\n",sU->m_i);
            itoa(sU->m_i,sU->string,10);
            *s=VAR_STRING;
            break;
        default:
            printf("Something went wrong");
            break;
    }
}