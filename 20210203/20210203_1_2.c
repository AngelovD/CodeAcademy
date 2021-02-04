#include <stdio.h>

/*Задача 1.2 принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/

int main(void){

    char cArr[]="aa";
    int iArr[]={1,2};
    double dArr[]={1.2,3.4};
    printf("Char array: %c\n",cArr[sizeof(cArr)/sizeof(cArr[0])-1]);
    printf("Int array: %d\n",iArr[sizeof(iArr)/sizeof(iArr[0])-1]);
    printf("Double array: %lf\n",dArr[sizeof(dArr)/sizeof(dArr[0])-1]);


    return 0;
}