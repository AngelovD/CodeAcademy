#include <stdio.h>

/*Задача 8.
Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */

int *fnFib(void){
    static int fib[20];
    fib[0]=0;
    fib[1]=1;
    int *p=&fib[0];
    for(int i=2;i<20;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    return p;
}

int main(void){

    int* ( *pFn)(void)=fnFib;
    int *p=pFn();
    for(int i=0;i<20;i++){
        printf("line %d : %d\n",i+1,*(p+i));
    }


    return 0;
}