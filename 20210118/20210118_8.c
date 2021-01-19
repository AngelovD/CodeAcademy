#include <stdio.h>

int isLetter(char c){
    int res = (c>='A'&&c<='z')? 1 : 0;
    return res;
}

int main(void){

    printf("%d\n",'z');
    printf("%d\n",'A');

    printf("%d", isLetter('%'));


    return 0;
}