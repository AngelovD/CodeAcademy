#include <stdio.h>

/*Задача 2. Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край.*/


/* Понеже принтира няма нужда да е int*/
void printArr(int a[], int l);

int main(void){

    int a[]={1,2,3};
    printArr(a,3);

    return 0;
}

void printArr(int a[], int l){
    int i=0;
    while(i<l){
        printf("%d\n",a[i]);
        i++;
    }
}