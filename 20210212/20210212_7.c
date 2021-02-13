#include <stdio.h>
#include <stdlib.h>

/*Задача 7.
Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/


int main(void){
    int *array=NULL;
    int size;

    printf("Enter the lenght: ");
    scanf("%d", &size);

    array = (int *)calloc(size,sizeof(int));

    for(int i=0;i<size;i++){
        printf("Element[%d]= %d\n",i,array[i]);
    }


    return 0;
}
