/*Задача 15.
Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(void);
void game(int b);
int getNum(int b);
void printRes(int *res,int size);

int main(void){

    srand(time(NULL));

    menu();

    return 0;
}


void menu(void){

    printf("For 5 ot 35 press 1\nFor 6 ot 42 press 2\nFor 6 ot 49 press 3\n");
    int c;
    fflush(stdin);
    scanf("%d",&c);
    switch(c){
        case 1:
            game(35);
            break;
        case 2:
            game(42);
            break;
        case 3:
            game(49);
            break;
        default:
            menu();
            break;
    }


}

void game(int b){


    int size;

    switch(b){
        case 35:
            size = 5;
            break;
        case 42:
            size = 6;
            break;
        case 49:
            size = 6;
            break;
        default:
            printf("Something went wrong");
            break;
    }
    int *arr=NULL;
    arr=(int *)malloc(size*sizeof(int));

    int i=0;
    while(i<size){
        int r=getNum(b);
        int flag = 1;
        for(int j=0;j<i;j++){
            if(arr[j]==r){
                flag=0;
            }
        }
        if(flag){
            arr[i]=r;
            i++;
        }
    }
    printRes(arr,size);
    free(arr);
}


int getNum(int b){
    return (rand()%b)+1;
}
void printRes(int *res,int size){

    printf("The numbers are: ");
    for(int i=0;i<size;i++){
        printf("%d ",res[i]);
    }

}