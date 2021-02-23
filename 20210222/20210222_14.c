/*Задача 14.
Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/

#include <stdio.h>
struct sM{
    unsigned short i:6;
};

int check(struct sM *sM);
void printStruct(struct sM *sM);

int main(void){
    struct sM sM={16};
    if(check(&sM)){
        printStruct(&sM);
    }
    return 0;
}

int check(struct sM *sM){
    if(sM->i<64&&sM->i>-1){
        return 1;
    }
    return 0;
}

void printStruct(struct sM *sM){
    printf("%d",sM->i);
}