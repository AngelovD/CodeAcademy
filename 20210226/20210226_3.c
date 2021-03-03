/*Задача 3. Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/

#include <stdio.h>

int main(void){

    typedef int* my_Pointer;
    int a=12;
    my_Pointer p = &a;
    printf("%d",*p);

    return 0;
}