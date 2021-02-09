#include <stdio.h>

/*7. Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/

extern int year[2][12];
void getDay(int *day);

int main(void){

    int a[3]={0};
    printf("Enter year:");
    scanf("%d",&a[0]);
    printf("Enter month:");
    scanf("%d",&a[1]);
    printf("Enter day:");
    scanf("%d",&a[2]);
    getDay(a);

    return 0;
}

void getDay(int *day){
    char flag=0;
    int counter=0;
    if(day[0]%4==0&&day[0]%400!=0){
        flag=1;
    }
    for(int i=0;i<day[1]-1;i++){
        counter+=year[flag][i];
    }
    counter+=day[2];
    printf("The %d.%d.%d is the: %d  day of the year",day[0],day[1],day[2],counter);
}


int year[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};