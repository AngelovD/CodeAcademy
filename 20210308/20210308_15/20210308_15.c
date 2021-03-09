/*Задача 15.
Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред*/

#include <stdio.h>
#include "stack.h"

int main(void){
    t_stack stack=newStack();
    t_stack* pstack=&stack;
        
    FILE *pfile = NULL;
    char *filename = "..\\at.txt";
    char c;
    int pos=0;
    pfile = fopen(filename, "rt");


    
    fseek(pfile,0,SEEK_END);
    pos=ftell(pfile);
    printf("EOF: %d\n",pos);
    fseek(pfile,0,SEEK_SET);

    /*използвам стек за да не се налага да търся позицията си всеки път*/


    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    else
    {
        printf("%s is open\n", filename);
        while(c!=EOF){
            c=fgetc(pfile);
            printf("%c",c);
            push(pstack,c);
        }            
        
    }
    printf("\n\n");
    while(!isEmpty(pstack)){
        printf("%c",pop(pstack));
    }


    fclose(pfile);
    return 0;
    

    return 0;
}