#include <stdio.h>

/*Задача 9. Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/

void strncpy(char *s,char *t,int n);

int main(void){

    char s[11];
    char t[]="Hello world";
    strncpy(s,t,5);
    printf("%s",s);

    return 0;
}

void strncpy(char *s,char *t,int n){
    while(n>0){
        *s=*t;
        *s++,*t++,n--;
    }
}