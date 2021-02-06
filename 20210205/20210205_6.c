#include <stdio.h>

/*Задача 6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/

void our_strcat(char *s, char *t);

int main(void){

    char s[]="Hello world";
    char t[]="\nJajaja";
    our_strcat(s,t);
    printf("%s",s);
    return 0;
}

void our_strcat(char *s, char *t){

    for(;*s!='\0';*s++)
        ;   
    while(*t!='\0'){
        *s=*t;
        *s++;*t++;
    }
    *s='\0';
}