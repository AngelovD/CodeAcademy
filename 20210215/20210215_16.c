#include <stdio.h>
#include <string.h>

/*Задача 16.
Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.h
tm
*/


int main(void){

    char string1[]="Hello world";
    char string3[]="New World";
    char string2[12],string4[10];

    strcpy(string2,string1);
    strcpy(string4,string3);

    printf("%s\n",string2);
    printf("%s\n",string4);

    return 0;
}