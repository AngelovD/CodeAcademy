#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/

int main(void)
{
    int *array=NULL;
    int size;
    int i;
    int sum=0;

    printf("Enter the lenght: ");
    scanf("%d", &size);

    array = malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
    {   
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        array[i] = value;
        sum+=array[i];
    }

    for (i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    printf("Sum= %d",sum);

    free(array);


    return 0;
}
