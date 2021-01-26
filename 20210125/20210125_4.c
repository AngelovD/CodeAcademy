#include <stdio.h>

int main(void){

    char c,changer=0;
    int counter=0;
    while ((c=getchar())!=EOF)
    {   
        if(c=='\n' || c==9 || c==11||c==32){
            if(changer){
                /*Zamestva s space*/
                putchar(' ');
                /*Zamestva s pyrviq vyveden razdelitelen symvol
                putchar('c');*/
                counter++;
            }
            changer=0;
        }else{
            changer=1;
            putchar(c);
            counter++;
        }     
    }
    
    return 0;
}