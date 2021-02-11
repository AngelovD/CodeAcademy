#include <stdio.h>

/*Задача 3. Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/

const int bigA=65;
const int bigZ=90;
const int smallA=97;
const int smallZ=122;

char checkPali();

int main(void){

    checkPali();

    return 0;
}

char checkPali(){
    int i=0;
    char c;
    char arr[100];
    while((c=getchar())!='\n'){
        if((c>=bigA&&c<=bigZ)||(c>=smallA&&c<=smallZ)){
            arr[i]=c;
            i++;
        }
    }
    i--;
    char *p=&arr[i];
    i=0;
    int mid=i/2;

    while(i<=mid){
        if(arr[i]==*p){
            i++;
            p--;
        }else{  
            printf("Isn't");
            return 0;
        }
    }

    printf("Is");

    return 1;

}