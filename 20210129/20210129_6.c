#include <stdio.h>

/*Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/

void decToBin(unsigned int n);

int main(void){

    int a;
    printf("Enter A value: ");
    scanf("%d",&a);
    decToBin(a);

    return 0;
}

void decToBin(unsigned int n){

    printf("Binary value is: ");

    unsigned i;
    unsigned iCheck = 31;
    for (i = 1 << iCheck; i > 0; i = i >> 1){
        (n & i) ? printf("1") : printf("0");
    }
}