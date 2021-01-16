#include <stdio.h>

int main(){

    char str[]="HELLO";
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        str[i]=tolower(str[i]);
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