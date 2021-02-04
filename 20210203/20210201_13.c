#include <stdio.h>

/*Задача 13 напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/

extern char toLower;

void lower(char s[]);

int main(void){

    char s[]="HeLlo World";
    lower(s);
    printf("%s",s);


    return 0;
}

void lower(char s[]){
    int i=0;
    while(s[i]!='\0'){

        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=toLower;
        }
        i++;
    }
}

char toLower=32;