#include <stdio.h>
#include <string.h>

/*Задача 18. Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.
https://www.tutorialspoint.com/c_standard_library/c_function_strlen.htm
Помислете как да направите проверка във функцията за копиране, дали
размерът на стринга, в който копираме, не е по-малък от размера на
стринга, от който копираме, и какво да се случва тогава.*/

int main(void){

    char string1[]="Hello world";
    char string3[]="New World";
    char string2[12],string4[10];
    memset(string2,'\0',12);
    memset(string4,'\0',10);

    strcpy(string2,string1);
    strcpy(string4,string3);

    char *cP=string2;
    cP+=strlen(string2)-1;
    while(*cP){
        putchar(*cP--);
    }
    printf("\n");
    cP=string4;
    cP+=strlen(string4)-1;
    while(*cP){
        putchar(*cP--);
    }


    return 0;
}