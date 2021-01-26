#include <stdio.h>

int main(void){

    char c;
    while ((c=getchar())!=EOF)
    {
        if(!(c==9 || c==11||c==32)){
            putchar(c);
        }
    }

    return 0;
}