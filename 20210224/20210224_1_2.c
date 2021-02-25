#include <stdio.h>

/*1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.*/

/*2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.
*/

#define PI 3.14159
#define E -1
#define ONE 1

#define SWAP(t,x, y) \
{ t i = x;\
x = y;\
y = i;\
}


int main(void){

    float p=PI;
    printf("%f\n",p);
    int a=E;
    int b=ONE;
    printf("a(E): %d\nb(ONE): %d\n",a,b);
    char c ='c';
    char z='z';
    printf("c: %c\nz: %c\n",c,z);
    SWAP(char,c,z);
    printf("c: %c\nz: %c\n",c,z);


    return 0;
}