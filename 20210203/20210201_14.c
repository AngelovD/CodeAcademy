#include <stdio.h>

/*Задача 14*. Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му*/

int getline(char s[],int lim);

int main(void){

    char s[]="Hello World\nHowdy\nJAJAJA";
    printf("%d",getline(s,25));

    return 0;
}

int getline(char s[],int lim){
    int i=0,counter=0;

    while(i<lim&&s[i]!='\0'){
        counter++;
        if(s[i]=='\n'){
            printf("First line: ");
            return counter;
        }
        i++;
    }
    printf("Entire string: ");
    return counter;
}