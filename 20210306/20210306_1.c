/*Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d amount:", i + 1);
        fflush(stdin);
        scanf("%d", &arr[i]);
    }
    printf("with %d long planks, %d short planks, %d small details, %d large details and %d screws, the worker can make: ", arr[0], arr[1], arr[2], arr[3], arr[4]);
    arr[0] /= 4;
    arr[1] /= 6;
    arr[2] /= 12;
    arr[3] /= 2;
    arr[4] /= 14;
    int count = arr[0];
    for (int i = 1; i < 5; i++)
    {
        if (count > arr[i])
        {
            count = arr[i];
        }
    }
    printf("%d products", count);
    free(arr);
    return 0;
}