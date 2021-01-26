#include <stdio.h>

int main(void){

    char c;
    int counterLetter=0, counterNum=0;
    while ((c=getchar())!=EOF)
    {
        if(c>47&&c<58){
            counterNum++;
            continue;
        }

        if((c>64&&c<91)||(c>96&&c<123)){
            counterLetter++;
        }
    }
    printf("\nNumbers: %d\nLetters: %d",counterNum,counterLetter);

    return 0;
}