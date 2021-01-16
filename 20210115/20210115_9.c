#include <stdio.h>

int main(){

    char word[] = "123456789Hello";

    int res = sizeof(word)/sizeof(char);

    printf("Lenght of 123456789Hello is: %d",res-1);


    return 0;
}