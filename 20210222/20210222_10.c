/*Задача 10.
Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct uS{
    union sU{
        int m_i;
        char string[50];
    } sU;

    enum stringC{
        VAR_INT,
        VAR_STRING
    } s;
};


void printUnion(struct uS *uS);

int main(void){

    struct uS uS;
    uS.s=VAR_STRING;
    strcpy(uS.sU.string,"12");
    printUnion(&uS);
    printUnion(&uS);
    printUnion(&uS);

    return 0;
}

void printUnion(struct uS *uS){
    switch(uS->s){
        case VAR_STRING:
            printf("S: %s\n",uS->sU.string);
            uS->sU.m_i=atoi(uS->sU.string);
            uS->s=VAR_INT;
            break;
        case VAR_INT:
            printf("D: %d\n",uS->sU.m_i);
            itoa(uS->sU.m_i,uS->sU.string,10);
            uS->s=VAR_STRING;
            break;
        default:
            printf("Something went wrong");
            break;
    }
}