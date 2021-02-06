#include <stdio.h>
#include <string.h>

/*Задача 7. Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/

int strend(char *s,char *t);

int main(void){

    char s[]="aaaHello world";
    char t[]="Hello world";
    printf("%d",strend(s,t));

    return 0;
}

int strend(char *s,char *t){
    int sLen=strlen(s),tLen=strlen(t);
    if(sLen<tLen){
        return 0;
    }

    for(int i=sLen-tLen,j=0;i<=sLen;i++,j++){
        if(s[i]!=t[j]){
            return 0;
        }
    }
    return 1;

}