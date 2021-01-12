#include <stdio.h>

int vzemiBitna(int a, int pos);

int main(){

    printf("%d",vzemiBitna(7,1));

    return 0;
}

int vzemiBitna(int a, int pos){
    int iCheck=1;
    a = a>>pos;
    a = a & iCheck;
    return a;
}