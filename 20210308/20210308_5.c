/*Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    FILE *fpIn = NULL;
    FILE *fpOut = NULL;
    char c;
    if (argc < 3)
    {
        printf("\nUsage:\n > %s infile.txt outfile.txt\n\n",
               argv[0]);
    }
    else
    {
        fpIn = fopen(argv[1], "r");
        fpOut = fopen(argv[2], "w");
    }
    while((c=getc(fpIn))!=EOF){
        int nValue = NULL;
        fscanf(fpIn, "%d", &nValue);
        if(nValue!=NULL){
            fprintf(fpOut, "%d ", nValue);
        }
    }
    
    if (NULL != fpIn)
        fclose(fpIn);
    if (NULL != fpOut)
        fclose(fpOut);
    return 0;
}