#include <stdio.h>

int main(void){

    char c;
    int counterLine=0;
    while ((c=getchar())!=EOF)
    {
        if(c=='\n'){
            counterLine++;
        }
    }
    printf("\nLines: %d",counterLine);

    return 0;
}