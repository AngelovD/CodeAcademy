#include <stdio.h>

/*Задача 12 напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/

int any(char s1[], char s2[]);

int main(void){

    char s1[]="Hello World";
    char s2[]="Green hollow";
    printf("%d",any(s1,s2));

    return 0;
}

int any(char s1[], char s2[]){
    int i=0,j=0,rez=0;
    char flag=0;
    while(s1[i]!='\0'){
        j=0;
        while(s2[j]!='\0'){
            if(s1[i]==s2[j]){
                flag=1;
                rez=i;
                break;
            }
            j++;
        }
        if(flag){
            break;
        }
        i++;
    }

    return rez;
}