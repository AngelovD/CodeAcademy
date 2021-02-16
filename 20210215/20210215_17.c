#include <stdio.h>
#include <string.h>
/*Задача 17. Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.
https://www.tutorialspoint.com/c_standard_library/c_functi
on_memset.htm
*/

int main(void){

    char string1[]="Hello world";
    char string3[]="New World";
    char string2[12],string4[10];
    memset(string2,'\0',12);
    memset(string4,'\0',10);

    strcpy(string2,string1);
    strcpy(string4,string3);

    printf("%s\n",string2);
    printf("%s\n",string4);

    return 0;
}