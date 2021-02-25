#include <stdio.h>

/*Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”
*/

#define MY_PRINT(...) printf("TRACE: %s%d, %d, %s, %d, %d",__VA_ARGS__)

int main(void){
    MY_PRINT("MY nums are: ",1,2,"JAJAJA ",3,4);

    return 0;
}