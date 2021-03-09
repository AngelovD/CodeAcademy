/*Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/

#include <stdio.h>

int main(int argc, char* argv[]){
    if(argc>1){
        for(int i=1;i<argc;i++){
        FILE *pfile = NULL;
        char *filename = argv[i];
        pfile = fopen(filename, "rt");
        printf("\n\n%s\n",filename);
        if (pfile == NULL)
            {
                printf("Failed to open %s.\n", filename);
            }else
            {
                printf("\n%s is open\n", filename);
                char c;
                while((c=fgetc(pfile))!=EOF){
                    putchar(c);
                }
            }
    

            fclose(pfile);
        }
    }else{
        char c;
        while((c=getchar())!=EOF){
            putchar(c);
        }
    }
    

    return 0;
}