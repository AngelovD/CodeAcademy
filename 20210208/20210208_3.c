#include <stdio.h>

/*Задача 3. Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).*/

int main(void){
    int a[5][5][5]={0};

    for(int i=0;i<5;i++){
        printf("\n\n");
        for(int j=0;j<5;j++){
            printf("\n");
            for(int z=0;z<5;z++){
                printf("%d ",a[i][j][z]);
            }
        }
    }
    return 0;
}