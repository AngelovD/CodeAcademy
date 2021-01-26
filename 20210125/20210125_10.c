#include <stdio.h>

void reverse(char s[], int counter);

int main(void){
    
    char c;
    char s[200];
    int counter=0;
    while ((c=getchar())!=EOF)
    {   
        if(c=='\n'){
            reverse(s,counter);
            counter=0;
            putchar(c);
        }else{
            s[counter]=c;
            counter++;
        }

    }
    return 0;
}

void reverse(char s[], int counter){

    while(counter>=0){
        putchar(s[--counter]);
    }
}