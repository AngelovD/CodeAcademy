#include <stdio.h>
#include <stdlib.h>

/*Задача 8.
Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/

int main(void){

    int *array=NULL;
    int size;

    printf("Enter the lenght: ");
    scanf("%d", &size);

    array = alloca(size * sizeof(int));

    return 0;
}