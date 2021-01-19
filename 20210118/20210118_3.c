#include <stdio.h>

int main(void){

    int x= 10;
    int y = 10;
    int true, false;

    //Логическия оператор се изпълнява пръв заради скобите
    true = ++x + (x||y);

    printf("True = %d\n", true);

    //Логическия оператор се изпълнява според приоритета си и резултата е (++x+x)||y = 1
    true = ++x + x||y;

    printf("True = %d\n", true);


    return 0;
}