#include <stdio.h>

/*Задача 11*. Напишете програма, която да премахва всички
коментари в една С програма.*/

void removeComments(void);

int main(void){

    removeComments();
    return 0;
}

void removeComments(void){
    char string[10000];
    int i=0;
    char c,changer=0, check=0, returnCheck=0;
    while ((c=getchar())!=EOF)
    {   
        if(changer && returnCheck){
            if(c=='/'){
                changer=0;
                continue;
            }
        }

        if(changer && c=='*'){
            returnCheck=1;
            continue;
        }

        if(!changer && check){
            if(c=='*'){
                changer=1;
            }else{
                check=0;
            }
        }
        if(!changer && c=='/'){
            check = 1;
            continue;
        }


        if(!changer){
            string[i]=c;
            i++;
        }

    }
    printf("%s",string);
}