#include <stdio.h>
#include <string.h>

/*Задача 10. Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/

void strncati(char *s,char *t,int n);

int main(void){

    char s[]="Hello ";
    char t[]="World waddada";
    strncati(s,t,5);
    printf("%s",s);

    return 0;
}

void strncati(char *s,char *t,int n){
    char *q;
    q=s + strlen(s);
    for(int j=0;j<n;j++,*q++,*t++){
        *q=*t;
    }
}