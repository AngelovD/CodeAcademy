/*Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *pfileR = NULL;
    char *filenameR = "at.txt";
    FILE *pfileW = NULL;
    char *filenameW = "nt.txt";
    char c;
    int line;
    printf("Line to remove: ");
    fflush(stdin);
    scanf("%d",&line);
    int counter=1;
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
            if(c=='\n'){
                counter++;
            }
            if(counter!=line){
                fputc(c,pfileW);
            }

        }
    }
    
    fclose(pfileR);
    fclose(pfileW);
    return 0;
}