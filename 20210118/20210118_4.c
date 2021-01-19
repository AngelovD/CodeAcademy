#include <stdio.h>

int main(void){

    int x= 10;
    int y = 10;

    int true = x&&y&x<<1;
    //Приоритета е <<,&,&& и за това логическото И се изпълнява последно

    printf("True = %d\n", true);

    true = x&&y^x<<1;
    //Приоритета е <<,^,&& и за това логическото И се изпълнява последно

    printf("True = %d\n", true);


    return 0;
}