/*Задача 12.

Напишете макро GENERIC_MAX(type)
,което трябва да се експандне до следната функция:
int int_max(int x, int y){
return x > y ? x : y;
}
или
float float_max(float x, float y){
return x > y ? x : y;
}
или
char char_max(char x, char y){
return x > y ? x : y;
}*/

#include <stdio.h>

#define GENERIC_MAX(a,b) (((a) > (b)) ? (a) : (b))

int main(void){

    int a=13,b=4;
    printf("%d\n",GENERIC_MAX(a,b));

    char m='m',z='z';
    printf("%c\n",GENERIC_MAX(m,z));

    float f1=1.2;
    float f2=23.4;
    printf("%f\n",GENERIC_MAX(f1,f2));


    return 0;
}