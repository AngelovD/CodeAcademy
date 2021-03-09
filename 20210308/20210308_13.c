/*Задача 13.
Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *pfile = NULL;
    char *filename = "at.txt";
    char c;
    /*последния ред завършва с EOF а не с \n*/
    int counter=1;
    pfile = fopen(filename, "rt");
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    else
    {
        printf("%s is open\n", filename);
        do{
            c=fgetc(pfile);
            if(c=='\n'){
                counter++;
            }
        }while(c!=EOF);
            
        
    }
    printf("%d",counter);
    
    fclose(pfile);
    return 0;
}