/*Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

#include <stdio.h>
#include "stack.h"

int check(FILE *pfile1);

int main(void){
    FILE *pfile1 = NULL;
    char *filename1 = "bracket.txt";
    pfile1 = fopen(filename1, "rt");
    
    if (pfile1 == NULL)
    {
        printf("Failed to open %s.\n", filename1);
        
        return 0;
    }
    else
    {
        printf("%s is open\n", filename1);
        int rez = check(pfile1);
        switch (rez)
        {
        case 0:
            printf("All brackets are closed");
            break;
        case 1:
            printf("Not all brackets are closed");
            break;
        case 2:
            printf("Closnig bracket brefore opening");
            break;
        default:
            break;
        }
    }

    return 0;
}

int check(FILE *pfile1){
    t_stack s_t1 = newStack();
    t_stack s_t2 = newStack();
    t_stack s_t3 = newStack();
    t_stack* s1=&s_t1;
    t_stack* s2=&s_t2;
    t_stack* s3=&s_t3;

    char c;
    while((c=getc(pfile1))!=EOF){
        if(c=='{'){
            push(s1,c);
        }else if(c=='['){
            push(s2,c);
        }else if(c=='('){
            push(s3,c);
        }else if(c=='}'){
            if(isEmpty(s1)){
                return 2;
            }else{
                pop(s1);
            }
        }else if(c==']'){
            if(isEmpty(s2)){
                return 2;
            }else{
                pop(s2);
            }
        }else if(c==')'){
            if(isEmpty(s3)){
                return 2;
            }else{
                pop(s3);
            }
        }
    }

    if(!isEmpty(s1)||!isEmpty(s2)||!isEmpty(s3)){
        return 1;
    }
    return 0;
}