#include <stdio.h>

int main(void){

    char c;
    int counter=0;
    while ((c=getchar())!=EOF)
    {
        counter++;
    }
    printf("\nSymbols: %d",counter);

    return 0;
}