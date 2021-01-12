#include <stdio.h>

int addDigit(int first, int second);

int main(){

    int res = addDigit(4,6);

    printf("%d",res);

    return 0;
}

int addDigit(int first, int second){
    int res;
    res= first+second;
    return res;
}