#include <stdio.h>
#include <stdlib.h>

/*Задача 6.
Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/

void printString(char *string);

int main(void){

    char *string =NULL;
    printString(string);


    return 0;
}

void printString(char *string){
    string = (char *)malloc(2*sizeof(char));
    char c;
    int size=2,i=0;
    while((c=getchar())!='\n'){
        if(i==size-1){
            size+=2;
            string = realloc(string,size*sizeof(char));
        }
        string[i]=c;
        i++;
    }
    string[i]='\0';
    printf("%s",string);
    free(string);

}   