#include <stdio.h>

/*Задача 4. Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0
*/

int our_strcmp(char *s, char *t);

int main(void){

    char s[]="Hello worlf";
    char t[]="Hello world";
    printf("%d",our_strcmp(s,t));


    return 0;
}

int our_strcmp(char *s, char *t){
    int i=0;

    while(s[i]!='\0'&&t[i]!='\0'){
        if(s[i]!=t[i]){
            return s[i]-t[i];
        }
        i++;
    }
    return 0;

}