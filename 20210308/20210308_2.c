/*Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница- име, поздрав, брой. Отворете
файла за редактиране. Внимавайте за мястото, къде поставяте
файла. Трябва да е там, където е сорс файлът.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *pfile = NULL;
    char *filename = "myfile.txt";
    pfile = fopen(filename, "wt");
    if (pfile == NULL)
    {
        printf("Failed to open %s.\n", filename);
    }
    else
    {
        printf("%s is open\n", filename);
    }

    fclose(pfile);
    pfile = NULL;
    remove ("myfile_copy.txt");
    if (rename("C:\\Users\\mitko\\codeAcademy\\testing\\20210308\\myfile.txt", "C:\\Users\\mitko\\codeAcademy\\testing\\20210308\\myfile_copy.txt")){
        printf("Failed to rename file.");
    }else{
        printf("File renamed successfully.");
    }
    return 0;
}