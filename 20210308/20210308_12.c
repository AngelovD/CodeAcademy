/*Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща на зад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни
файлове и просто число в байтове.*/

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
        pos=ftell(pfile);
        printf("\nPos: %d\n\n",pos);
        fseek(pfile,-7,SEEK_CUR);
        pos=ftell(pfile);
        printf("\nSeek Pos: %d\n\n",pos);
    }
    
    
    fclose(pfile);
    return 0;
}