#include <stdio.h>

/*Задача 8.
Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/

int main(void){


    int a=12;
    int *iP=&a;
    printf("%p",iP);

    return 0;
}