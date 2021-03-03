/*Задача 2 Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    typedef long long int my_Long;
    my_Long l = 2414214214;
    printf("%d",sizeof(l));

    return 0;
}