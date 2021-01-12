#include <stdio.h>

int iz4istiBitna(int a, int pos){

    int iCheck = 1;
    iCheck = iCheck<<pos;
    a=a^iCheck;
    return a;
}

int main(){

    printf("%d",iz4istiBitna(7,1));

    return 0;
}