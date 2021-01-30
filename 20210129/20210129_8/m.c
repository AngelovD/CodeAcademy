#include <stdio.h>
#include "f.h"

/*Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.*/

int main(void){

    int a,b,c;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d",&b);
    printf("Enter C: ");
    scanf("%d",&c);

    printf("A+B= %d\n",add(a,b));
    printf("C+1= %d",incr(c));

    return 0;
}