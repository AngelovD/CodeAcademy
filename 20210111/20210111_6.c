#include <stdio.h>

int main(){


    int a = 7;
    int pos = 6;
    int iCheck = 1;
    iCheck = iCheck<<pos;
    a = a^iCheck;


    printf("%d", a);

    return 0;
}