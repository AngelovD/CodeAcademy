#include <stdio.h>

/*Задача 8.Дефинирайте едномерен масив int с 10 елемента =
{100,90,80,70,60,50,40,30,20,10} Дефинирайте пойнтер, който ще сочи към
масива.
Достъпете 3 тия елемент от масива и му задайте стойност 5.
Достъпете 4 тия елемент и му задайте стойност 33.
Достъпете 5 тия елемент и го намалете със 7.
Достъпете 7 мия елемент и го увеличете с 10.
Достъпете 10 тия елемент и го умножете по 3.
Изпишете го по двата възможни начина и закоментирайте единия.
Принтирайте на екрана всички елементи на масива.*/

int main(void){

    int a[10]={100,90,80,70,60,50,40,30,20,10};
    int i=0;
    for(i=0;i<10;i++){
        printf("Old %d : %d\n",i+1,a[i]);
    }
    /*
    int *pn = NULL;
    pn=a;
    pn[2]=5;
    pn[3]=33;
    pn[4]-=7;
    pn[6]+=10;
    pn[9]*=3;*/

    a[2]=5;
    a[3]=33;
    a[4]-=7;
    a[6]+=10;
    a[9]*=3;

    for(i=0;i<10;i++){
        printf("New %d : %d\n",i+1,a[i]);
    }

    return 0;
}
