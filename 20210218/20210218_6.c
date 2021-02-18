#include <stdio.h>

/*Задача 6.
Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/

int findA(char *a);

int main(void){

    char string[]="This is a string to test my idea for search in a char and ....";

    printf("%s\nHas %d a's",string,findA(string));

    return 0;
}


int findA(char *a){
    int counter=0;
    while(*a){
        if(*a=='a'){
            counter++;
        }
        a++;
    }
    return counter;
}