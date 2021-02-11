#include <stdio.h>
#include <stdlib.h>
/*Решете задачата за генериране на 6 буквена парола с
пойнтери.*/

const int bigA=65;
const int bigZ=90;

void generatePass();

int main(void){

    char arr[7];


    generatePass(arr);
    printf("%s",arr);

    return 0;
}

void generatePass(char *a){

   time_t t;
   srand((unsigned) time(&t));
   int flag =1;
   char *p=a;
   
    do{
        
        for(int i=0;i<6;i++){
            *p = (rand() %  (bigZ - bigA + 1)) + bigA;
            printf("%c",*p);
            p++;
        }
        char c;
        printf("\nDo you like it?(y,n)\n");
        scanf("%c",&c);
        if(c=='y'){
            flag=0;
            p++;
            *p='\n';
        }else{
            p-=6;
        }

    }while(flag);

}