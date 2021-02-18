/*Задача 14.
Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isAnagram(char *string1, char *string2);

int main(void){

    char string1[]="reklama";
    char string2[]="karamel";
    printf("%s %s %s",string1,(isAnagram(string1,string2)) ? "is anagram to" : "isn't anagram to",string2);

    return 0;
}

int isAnagram(char *string1, char *string2){
    if(strlen(string1)!=strlen(string2)){
        return 0;
    }
    char letters[26];
    memset(&letters[0], 0, sizeof(letters));
    while(*string1){
        *string1=tolower(*string1);
        if(*string1>='a'&&*string1<='z'){
            letters[*string1-'a']++;
        }
        string1++;
    }

    while(*string2){
        *string2=tolower(*string2);
        if(*string2>='a'&&*string2<='z'){
            letters[*string2-'a']--;
            if(letters[*string2-'a']<0){
                return 0;
            }
        }
        string2++;
    }
    return 1;
}