/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.
*/

#include <stdio.h>

typedef int my_Arr[3];

int main(void){

    my_Arr arr={1,2,3};
    printf("%d\n%d\n%d",arr[0],arr[1],arr[2]);

    return 0;
}