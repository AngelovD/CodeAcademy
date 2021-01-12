#include <stdio.h> 

int main(){

    int iMask = 143;
    int a = 127;
    a = a&iMask;
    printf("%d",a);
    return 0;

}