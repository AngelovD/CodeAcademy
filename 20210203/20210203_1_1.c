#include <stdio.h>

/*Задача 1 декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);*/

int main(void){

    char cArr[]="aa";
    int iArr[]={1,2};
    double dArr[]={1.2,3.4};
    printf("Char array: %d\n",sizeof(cArr));
    printf("Int array: %d\n",sizeof(iArr));
    printf("Double array: %d\n",sizeof(dArr));


    return 0;
}