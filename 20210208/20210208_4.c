#include <stdio.h>

/*Задача 4. Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.*/

int main(void){

    int a[5]={0};
    float counter = 0,rez = 0;
    for(int i=0;i<5;i++){
        printf("Enter value: ");
        scanf("%d",&a[i]);
        counter+=a[i];
    }
    rez=counter/5;
    printf("Average= %f",rez);
    return 0;
}