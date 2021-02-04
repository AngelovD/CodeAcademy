#include <stdio.h>

/*Задача 3.Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/

int linSearch(int a[], int l, int d);

int main(void){

    int a[]={1,2,3,4,5};
    printf("%d",linSearch(a,5,7));

    return 0;
}

int linSearch(int a[], int l, int d){
    int i=0,rez=-1;
    while(i<l){
        if(a[i]==d){
            rez=i;
            break;
        }
        i++;
    }
    return rez;
}