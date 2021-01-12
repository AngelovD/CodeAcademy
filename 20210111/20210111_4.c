#include <stdio.h>

int vdigniBitna(int a, int pos){

    int iCheck = 1;
    iCheck = iCheck<<pos;
    a = a|iCheck;
    return a;
}

int main(){

    printf("%d",vdigniBitna(7,2));

    return 0;
}