#include <stdio.h>

/*Задача 6. Напишете функция, която изчислява произведението на
числата от 1 до 30.*/

int calc();

int main(void){

    printf("%d",calc());

    return 0;
}

int calc(){
    int i=1,rez=0;
    while(i<31){
        rez+=i++;
    }
    return rez;
}