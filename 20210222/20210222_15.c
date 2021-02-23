/*Задача 15.
Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/
#include <stdio.h>
#include <string.h>

struct sU{
    int i;
    char string[10];
    double d;
    enum{
        false,
        true
    }e;
};

int main(void){

    struct sU sU[20];
    for(int i=0;i<20;i++){
        sU[i].i=i;
        strcpy (sU[i].string, "Gosho");
        sU[i].d=(double)i/28;
        sU[i].e=i%2;
    }
    for(int i=0;i<20;i++){
        printf("%d,%s,%lf,%d\n",sU[i].i,sU[i].string,sU[i].d,sU[i].e);
    }

    return 0;
}