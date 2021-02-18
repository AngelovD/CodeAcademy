#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

/*Задача 2. Добавете към горния код функции за умножение
и деление.*/

int main(int argc, char *argv[]){

    int ( *pFn[5])(int,int)={fnPlus,fnMinus,fnTimes,fnDiv,fnDivP};

    if(argc<4){
        printf("Enter a +/- b");
    }else{
        switch(argv[2][0]){
            case '+':
                printf("Result: %s %c %s = %d",argv[1],argv[2][0],argv[3],pFn[0](atoi(argv[1]),atoi(argv[3])));
                break;
            case '-':
                printf("Result: %s %c %s = %d",argv[1],argv[2][0],argv[3],pFn[1](atoi(argv[1]),atoi(argv[3])));
                break;
            case 'x':
                printf("Result: %s %c %s = %d",argv[1],argv[2][0],argv[3],pFn[2](atoi(argv[1]),atoi(argv[3])));
                break;
            case '/':
                if(atoi(argv[3])==0){
                    printf("Can't divide by 0");
                    break;
                }
                printf("Result: %s %c %s = %d",argv[1],argv[2][0],argv[3],pFn[3](atoi(argv[1]),atoi(argv[3])));
                break;
            case '%':
                if(atoi(argv[3])==0){
                    printf("Can't divide by 0");
                    break;
                }
                printf("Result: %s %c %s = %d",argv[1],argv[2][0],argv[3],pFn[4](atoi(argv[1]),atoi(argv[3])));
                break;
            default:
                break;
        }
    }

}