/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/

#include <stdio.h>

typedef int my_Int;

my_Int sum(my_Int a, my_Int b){
    return a+b;
}

int main(void){

    my_Int a=12,b=12,res;
    res=sum(a,b);

    printf("%d",res);
    return 0;
}