#include <stdio.h>

/*Задача 3.Какво е грешното на този код?
void my_strcpy(char *t, char *s){
for(; *t; t++, s++)
*s = *t;
}
*/

void my_strcpy(char *t, char *s){
    for(; *t; *t++, *s++)
        *s = *t;
}

int main(void){

    char t[]="Hello";
    char s[6];
    my_strcpy(t,s);
    printf("%s",s);
    return 0;
}