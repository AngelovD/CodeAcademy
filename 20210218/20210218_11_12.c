/*Задача 11/12.
Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.
Насоки:
1. Въвежда се дължина на паролата, колко символа от нея са малки
букви (a..z), големи букви( A..Z ), колко са цифрите (0..9), колко
специални символи (@#$%!^&*).
2. Използва се генератор на случайни числа за символите и тяхната
позиция*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char fnBig(void);
char fnSmall(void);
char fnNum(void);
char fnSym(void);
int getRand(int a);
void generate(char *pass, int size);

int main(void){
    srand(time(NULL));
    char *pass=NULL;
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    pass=(char*)malloc((size+1));
    
    generate(pass, size);

    for(int i=0;i<size;i++){
        
        printf("%c",pass[i]);
    }

    free(pass);
    return 0;
}

int getRand(int a){
    
    return rand()%a;
}

char fnBig(void){
    return 'A'+getRand(26);
}

char fnSmall(void){
    return 'a'+getRand(26);
}

char fnNum(void){
    return getRand(10)+'0';
}

char fnSym(void){
    return getRand(8)+33;
}

void generate(char *pass, int size){
    
    char (*fn[4])(void)={fnBig,fnSmall,fnNum,fnSym};
    for(int i=0;i<size;i++){
        int r=getRand(4);
        
        pass[i]=fn[r]();
    }
}