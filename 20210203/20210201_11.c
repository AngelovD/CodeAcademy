#include <stdio.h>

/*Задача 11 напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/

void squeeze(char s[], int c);

int main(void){

    char s[]="Hello llllWorld\0";
    char c='l';

    squeeze(s,c);

    return 0;
}

void squeeze(char s[], int c){
    int i=0,flag=0;
    do{
        if(s[i+flag]==c){
            flag++;
            continue;
        }
        s[i]=s[i+flag];
        i++;
    }while(s[i+flag]!='\0');
    s[i]='\0';
    printf("%s",s);
}