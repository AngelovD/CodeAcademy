/*Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    char s[50];
    long int pos;
    fpos_t position;
    pfile = fopen(filename, "rt");
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    else
    {
        printf("%s is open\n", filename);

        
        fgets(s,50,pfile);
        printf("\n%s",s);
    
    }
    
    
    fclose(pfile);
    return 0;
}