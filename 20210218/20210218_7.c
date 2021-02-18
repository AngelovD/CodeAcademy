#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*Задача 7.
Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */

char *findL(char *string);

int main(void){

    char *p=NULL;
    char string[]="This is a string to test my idea for search in a char and ....";
    p=findL(string);

    for(int i=0;i<26;i++){  
        printf("Letter %c has: %d\n",*(p+i),*(p+26+i));
    }
    return 0;
}

char *findL(char *string){
    
    static char rez[2][26];
    char *p=&rez[0][0];
    memset(&rez[0][0], 0, sizeof(rez));
    
    
    while(*string){
        *string=tolower(*string);
        if(*string>='a'&&*string<='z'){
            rez[0][*string-'a']=*string;
            rez[1][*string-'a']++;
        }
        
        string++;
    }
    
    
    
    return p;
}
