#include <stdio.h>

/*Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/

int main(void){

    char string[]="I am a poor  programmer";
    char string2[] = "great"; 
    char *cP1 = &string[7];
    char *cP2 = string2;
    while (*cP2){
    *cP1++ = *cP2++;
    }
    printf("%s\n", string);

    return 0;
}