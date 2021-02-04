#include <stdio.h>
#include <string.h>

/*Задача 10. Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/

/*Работи до 16тична бройна система*/

void reverse(char s[]);
void itob(int n, char s[], int b);

extern char nums[17];

int main(void){
    
    int n=134;
    char s[32]={'0'};
    int b=15;

    itob(n,s,b);

    return 0;
}

void itob(int n, char s[], int b){

    int i=0;
    do{
        s[i]=nums[(n%b)];
        n/=b;
        i++;
    }while(n>0);

    reverse(s);

}

void reverse(char s[]){
    int i,j;
    char c;
    for(i = 0, j = strlen(s)-1; i < j; i++, j--){
        c=s[i];
        s[i]=s[j];
        s[j]=c;
    }
    printf("%s",s);
}

char nums[17] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};