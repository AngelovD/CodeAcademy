#include <stdio.h> 

int main(){

    int iMask = 170;
    int a = 144;
    a = a&iMask;
    printf("%d",a);

    return 0;
}