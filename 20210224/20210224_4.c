/*Задача 4. Използвайте предефинирани макроси*/

#include <stdio.h>

int main()
{
    printf("File :%s\n", __FILE__);
    printf("Date :%s\n", __DATE__);
    printf("Time :%s\n", __TIME__);
    printf("Line :%d\n", __LINE__);
    /*STDC работи, но студиото ми пищи за това е закоментиран*/
    /*printf("ANSI :%d\n", __STDC__);*/

    return 0;
}