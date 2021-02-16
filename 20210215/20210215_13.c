#include <stdio.h>

/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());
*/

int main(void){

    char string[]="Hello world";
    char *s=string;
    int counter=0;
    while(*s){
        counter++;
        s++;
    }

    printf("The string:\n%s\nHas %d chars",string,counter);

    return 0;
}