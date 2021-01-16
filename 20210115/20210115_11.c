#include <stdio.h>

int main(){

    char str[]="Hello";
    char rts[6];

    int i=5;
    int j=0;
    while(i>=0){
        rts[j++]=str[i];
        i--;
     //   printf("%c",str[i--]);
    }

   // printf("\n%c",rts[2]);
    i=0;
    while(i<6){
        printf("%c",rts[i]);
        i++;
    }

    return 0;
}