/*Задача 14.
Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви*/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *pfileR = NULL;
    FILE *pfileW = NULL;
    char *filenameW = "temp.txt";
    char *filenameR = "at.txt";
    char c;
    pfileR = fopen(filenameR, "rt");
    pfileW = fopen(filenameW, "wt");
    if (pfileR == NULL)
    {
        printf("Failed to open %s.\n", filenameR);
    }
    else
    {
        printf("%s is open\n", filenameR);
        while(c!=EOF){
            c=fgetc(pfileR);
            fputc(toupper(c),pfileW);
        }
    }
    fclose(pfileR);
    fclose(pfileW);
    remove("at.txt");
    if (rename("temp.txt", "at.txt")){
        printf("Failed to rename file.");
    }else{
        printf("File renamed successfully.");
        remove("temp.txt");
    }
    
    return 0;
}