/*Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int ch;
    fp = fopen("at.txt", "a");

    fprintf(fp,"\n%d %s %s",12,"Ivan","Petrov");

    fclose(fp);
    return 0;
}