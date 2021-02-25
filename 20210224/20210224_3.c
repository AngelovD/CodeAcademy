#include <stdio.h>

/*Задача 3. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG)*/

void debugMsg(const char *a){
    #ifdef ADEBUG
        printf("DEBUG: %s",a);
    #endif
}

int main(void){

    debugMsg("JAJAJA");
    return 0;
}