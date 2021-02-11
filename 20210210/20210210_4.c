#include <stdio.h>
#include <stdlib.h>

/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/

const int bigA=65;
const int bigZ=90;

void generatePass();

int main(void){

    generatePass();
    return 0;
}

void generatePass(){

   time_t t;
   srand((unsigned) time(&t));
   int flag =1;
   
    do{
        char c;
        for(int i=0;i<6;i++){
            c = (rand() %  (bigZ - bigA + 1)) + bigA;
            printf("%c",c);
        }
        printf("\nDo you like it?(y,n)\n");
        scanf("%c",&c);
        if(c=='y'){
            flag=0;
        }

    }while(flag);

}