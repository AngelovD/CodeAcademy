#include <stdio.h>

int main(void){

    char c,changer=0;
    int counter=0;
    while ((c=getchar())!='?')
    {   
        if((c>64&&c<91)||(c>96&&c<123)){
            putchar(c);
        }
    }
    
    return 0;
}