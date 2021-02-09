#include <stdio.h>

/*Задача 2. Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/


int main(void){
    int a[5][5]={0};

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("Enter value: ");
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<5;i++){
        printf("\n");
        for(int j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
    }


}