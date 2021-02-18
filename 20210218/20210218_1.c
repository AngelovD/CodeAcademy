#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред:*/

int fnPlus(int a,int b){return a+b;}
int fnMinus(int a,int b){return a-b;}


int main(int argc, char *argv[]){

    int ( *pFn)(int,int)=NULL;
    if(argc<4){
        printf("Enter a +/- b");
    }else{
        switch(argv[2][0]){
            case '+':
                pFn=fnPlus;
                break;
            case '-':
                pFn=fnMinus;
                break;
            default:
                break;
        }
    }

    printf("Result: %s %c %s = %d",argv[1],argv[2][0],argv[3],pFn(atoi(argv[1]),atoi(argv[3])));


}