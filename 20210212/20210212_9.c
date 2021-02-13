#include <stdio.h>
#include <stdlib.h>

/*Задача 9.
Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/

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

    char c;
    do{

    printf("Enter extra lenght: ");
    scanf("%d",&sizeEx);

    array=realloc(array,(size+=sizeEx)*sizeof(int));

    for (; i < size; i++)
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
    printf("Would you like to allocate more?(y,n)");
    fflush(stdin);
    scanf("%c",&c);

    }while(c!='n');

    return 0;    
}