/*Задача 5.
Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int *a,int l1,int l2);

int main(void){

    int matrix[5][5];
    int *p = &matrix[0][0];
    fill(p,5,5);

    for(int i=0;i<5;i++){
        printf("\n");
        for(int j=0;j<5;j++){
            printf("%d  ",matrix[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<25;i++){
        if(*(p+((i/5)*5)+i%5)>=1 &&*(p+((i/5)*5)+i%5)<=5){
            printf("%d: matrix[%d][%d]\n",*(p+((i/5)*5)+i%5),(i/5),i%5);
        }
            
    }

    return 0;
}

void fill(int *a,int l1,int l2){
    int i=0,j=0;

    time_t t;
    srand((unsigned) time(&t));

    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            *(a+(i*l1)+j)=rand()%10;
        }
    }
}