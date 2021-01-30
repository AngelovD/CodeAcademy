#include <stdio.h>

/*Задача 5. Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/

int isEven(int a);

int main(void){

    int a;
    printf("Enter number to check: ");
    scanf("%d",&a);
    if(isEven(a)){
        printf("%d is even",a);
    }else{
        printf("%d is not even",a);
    }


    return 0;
}

int isEven(int a){
    if(a%2==0){
        return 1;
    }
    return 0;
}