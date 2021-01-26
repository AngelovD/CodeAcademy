#include <stdio.h>

int main(void){

    char c;
    while ((c=getchar())!=EOF)
    {
        if(c>64&&c<91){
            c+=32;
            putchar(c);
        }else{
            putchar(c);
        }
    }
    return 0;
}