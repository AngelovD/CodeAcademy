/*Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            FILE *pfile = NULL;
            char *filename = argv[i];
            pfile = fopen(filename, "rt");
            if (pfile == NULL)
            {
                printf("Failed to open %s.\n", filename);
            }
            else
            {

                printf("Page: %d\nFilename: %s\n\n",i,filename);
                char c;
                while ((c = fgetc(pfile)) != EOF)
                {
                    putchar(c);
                }
                printf("\n\n\n");
            }

            fclose(pfile);
        }
    }
    else
    {
        char c;
        while ((c = getchar()) != EOF)
        {
            putchar(c);
        }
    }

    return 0;
}