#include <stdio.h>

/*Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).*/

int main(void){

    int *iP=NULL;
    int i=34;
    iP=&i;

    printf("%d\n",i);
    printf("%d\n",*iP);
    printf("%p\n",iP);

    return 0;
}