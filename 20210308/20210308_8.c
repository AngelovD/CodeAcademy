/*Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *pfileR = NULL;
    FILE *pfileW = NULL;
    char *filenameR = "myfile.txt";
    char s[50];
    pfileR = fopen(filenameR, "rt");
    char *filenameW = "myfileW.txt";
    pfileW = fopen(filenameW, "at");
    if (pfileR == NULL)
    {
        printf("Failed to open %s.\n", filenameR);
    }
    else
    {
        printf("%s is open\n", filenameR);

        
        fgets(s,50,pfileR);
        fputs(s,pfileW);
        
    }
    
    
    fclose(pfileR);
}