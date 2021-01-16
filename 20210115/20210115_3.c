#include <stdio.h>

int main(){

    printf("Char literals: '%c' , '%c' , '%c' \n", '\041', '\0x3A','Z');
    printf("Integer literals: %d , %d , %lld \n", 123, 0xFFF, 123456789012345ULL);
    printf("Float literals: %lf, %lf, %lg, %lg \n", 1.23,1234.5678, 123E+28);
    printf("String literals: \"%s\" , \"%s\" , \"%s\" \n", "xxx", "yyy", "zzz");

    return 0;
}