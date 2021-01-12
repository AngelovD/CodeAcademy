#include <stdio.h>

int obarniBitNa(int a, int pos){

    int iCheck = 1;
    iCheck = iCheck<<pos;
    a = a^iCheck;
    return a;
}

int main(){

    printf("%d", obarniBitNa(7,4));

    return 0;
}