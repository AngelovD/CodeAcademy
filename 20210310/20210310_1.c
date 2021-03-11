/*Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/

#include <stdio.h>
#include <stdlib.h>

void compare( FILE* pfile1, FILE* pfile2,long int* pos1,long int* pos2, int* line);

int main()
{
    int val, line=0;

    FILE *pfile1 = NULL;
    char *filename1 = "text1.txt";
    FILE *pfile2 = NULL;
    char *filename2 = "text2.txt";
    long int pos1,pos2;
    pfile1 = fopen(filename1, "rt");
    pfile2 = fopen(filename2, "rt");
    if (pfile1 == NULL || pfile2 == NULL)
    {
        printf("Failed to open %s.\n", filename1);
        printf("Failed to open %s.\n", filename2);
        return 0;
    }
    else
    {
        
        printf("%s is open\n", filename1);
        printf("%s is open\n", filename2);
        compare(pfile1,pfile2,&pos1,&pos2,&line);
        fseek(pfile1,pos1,SEEK_SET);
        fseek(pfile2,pos2,SEEK_SET);
        printf("%s differs from %s on line %d:\n",filename1,filename2, line+1);
        char c;
        while((c=getc(pfile1))!='\n'&&c!=EOF){
            printf("%c",c);
        }
        printf("\n\n");
        while((c=getc(pfile2))!='\n'&&c!=EOF){
            printf("%c",c);
        }
        
    }
    

    return 0;
}

void compare( FILE* pfile1, FILE* pfile2,long int* pos1,long int* pos2, int *line){
    char f1,f2;
    *pos1=ftell(pfile1);
    *pos2=ftell(pfile2);
    do{
        f1=getc(pfile1);
        f2=getc(pfile2);
        if(f1==f2){
            if(f1=='\n'){
                *pos1=ftell(pfile1);
                *pos2=ftell(pfile2); 
                *line+=1;
            }
        }else{
            printf("2");
            break;
        }
    }while(f1!='\0'&&f2!='\0');
}