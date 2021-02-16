#include <stdio.h>

/*Задача 15.
Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.*/

void copyStr(char *string1, char *string2,char *string3, char *string4);

int main(void){

    char string1[]="Hello world";
    char string3[]="New World";
    char string2[12],string4[10];

    copyStr(string1,string2,string3,string4);

    printf("%s\n",string2);
    printf("%s\n",string4);

    return 0;
}

void copyStr(char *string1, char *string2,char *string3, char *string4){

    while(*string1!='\0'){
        *string2=*string1;
        string1++;
        string2++;
    }
    *string2='\0';
        
    while(*string3!='\0'){
        *string4=*string3;
        string3++;
        string4++;
    }
    *string4='\0';
}