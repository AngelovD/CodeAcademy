#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.
*/

float getAverage();

int main(void){


    printf("Average = %.3f",getAverage());
    return 0;
}


float getAverage(){

    time_t t;
    srand((unsigned) time(&t));

    int matrix[10][10][10];
    int i=0,j=0,z=0,total=0;

    float rez=0;
    while(z<1000){
        i=z/100;
        j=(z%100)/10;
        matrix[i][j][z%10]=rand() % 100;
        total+=matrix[i][j][z%10];
        z++;
    }
    printf("Total1 %d\n",total);
    i=0;j=0;z=0;
    int *p=&matrix[0][0][0];
    total=0;
    while(z<1000){
        i=z/100;
        j=(z%100)/10;
        total+=*(p+(i*100)+(j*10)+(z%10));
        z++;
    }
    printf("Total2 %d\n",total);

    rez=(float)total/1000;
}