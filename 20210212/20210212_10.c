#include <stdio.h>
#include <stdlib.h>

/*Задача 10*.
Реализация на масив с променлива размерност
Тази задача е подобна на задача 2, където
използваме char масив. Тук може да използвате
друг тип.*/

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

    char c;
    do{

    printf("Enter new lenght: ");
    scanf("%d",&size);

    array=realloc(array,size*sizeof(int));

    for (i=0; i < size; i++)
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
    printf("Would you like to allocate new?(y,n)");
    fflush(stdin);
    scanf("%c",&c);

    }while(c!='n');

    free(array);

    return 0;
}