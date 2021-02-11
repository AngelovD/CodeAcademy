#include <stdio.h>

/*Задача 2. Напишете програма, която чете съобщение, след което го
принтира в обратен ред:
Enter a message: I am Miro.
Reversal is : .oriM ma I
Използвайте getchar() за да вземете символите от конзолата, запазете ги в
масив от чарове, прекратете четенето до достигане на \n. Използвайте
пойнтер, който да сочи към текущата позиция на масива. Чрез него
принтирайте масива в обратен ред.*/

void revRet();

int main(void){

    revRet();

    return 0;
}

void revRet(){
    int i=0;
    char c;
    char arr[100];
    while((c=getchar())!='\n'){
        arr[i]=c;
        i++;
    }

    char *p=&arr[i-1];
    while(i>=0){
        putchar(*p);
        p--;
        i--;
    }
}