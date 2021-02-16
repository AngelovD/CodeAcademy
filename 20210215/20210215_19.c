#include <stdio.h>

/*Задача 19. Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/

int main(void){

    char string[]= "Baba, kaka, mama";
    char *cP=string;
    printf("%s\n",string);
    while(*cP){
        if(*cP=='a'){
            *cP='o';
        }
        cP++;
    }

    printf("%s\n",string);

    return 0;
}

