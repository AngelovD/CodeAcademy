#include <stdio.h>

int main(void){

    char c;
    int counterSpace=0;
    while ((c=getchar())!=EOF)
    {
        if(c=='\n' || c==9 || c==11||c==32){
            counterSpace++;
        }
    }
    printf("\nSpaces: %d",counterSpace);

    return 0;
}