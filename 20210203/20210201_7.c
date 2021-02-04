#include <stdio.h>

/*Задача 7. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/

int calc(int i);

int main(void){

    printf("%d",calc(1));

    return 0;
}

int calc(int i){
    if(i<30){
        return i+calc(i+1);
    }else{
        return i;
    }
}