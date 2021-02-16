#include <stdio.h>
#include <stdlib.h>

/*
Задача 21. Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.
*/
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void){

    char string[]="Hello";
    printf("%s\n",string);
    qsort(string, 6, sizeof(char), cmpfunc);
    printf("%s",string);
    return 0;
}