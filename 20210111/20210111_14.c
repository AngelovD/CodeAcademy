#include <stdio.h> 

int main(){

    int iMask = 170;
    int a = 203;
    a = a^iMask;
    printf("%d",a);

    return 0;
}