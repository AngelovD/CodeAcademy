#include <stdio.h>

/*Задача 1. Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/

int main(void){

    int a[5]={0};
    for(int i=0;i<5;i++){
        printf("Enter value: ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }


    return 0;
}