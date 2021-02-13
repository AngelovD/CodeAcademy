#include <stdio.h>
#include <stdlib.h>

/*Задача 5 Разширяване на заделена памет с realloc*/

int main(void){

    int *array=NULL;
    int size, sizeEx;
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

    printf("Enter extra lenght: ");
    scanf("%d",&sizeEx);

    array=realloc(array,(size+sizeEx)*sizeof(int));

    for (; i < size+sizeEx; i++)
    {
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        array[i] = value;
    }

    for (i = 0; i < size+sizeEx; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    free(array);


    return 0;
}