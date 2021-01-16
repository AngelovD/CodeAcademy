#include <stdio.h>

int main(){

    char str[]="Hello";
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        if(str[i]=='l'){
            str[i]='x';
        }
        i++;
    }

    printf("\n\n");

    i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }

    return 0;
}