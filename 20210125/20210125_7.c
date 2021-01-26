#include <stdio.h>

int main(void){

    char c,arrC[80], changer=0;
    int counter=0;
    while ((c=getchar())!=EOF)
    {
        if(changer){
            putchar(c);
        }else if(counter==79){
            int i=0;
            for(;i<79;i++){
                putchar(arrC[i]);
            }
            putchar(c);
            counter=0;
            changer=1;
        }else{
            arrC[counter]=c;
            counter++;
        }

        if(c=='\n'){
            putchar(c);
            changer=0;
        }

    }

    return 0;
}