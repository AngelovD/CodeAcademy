#include <stdio.h> 

int main(){

    int iMask = 255;
    int pos = 5;
    int a =203;
    pos = 8-pos;
    iMask = iMask>>pos;
    a = a&iMask;
    printf("%d",a);

    return 0;
}