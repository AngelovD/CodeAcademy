#include <stdio.h>
#include <stdlib.h>

/*Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/

int main(void){

    int *array=NULL;
    int size;
    int i;

    printf("Enter the lenght: ");
    scanf("%d", &size);

    array = malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
    {   
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        array[i] = value;
    }

    for (i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }


    free(array);


    return 0;
}