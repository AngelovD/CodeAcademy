/*Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/

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
        if(!fgetpos(pfile, &position)){
            printf("Get Pos: %d\n\n", position);
        }else{
            printf("not done\n\n");
        }
        
    }
    
    
    fclose(pfile);
    return 0;
}