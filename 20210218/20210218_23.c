/*Задача 23.
Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.
Вариация: Да се направи същото с масив от символи.*/

#include <stdio.h>
#include <stdlib.h>

void sort(int *arr,int size);

int main(void){

    printf("Enter array lenght: ");
    int size;
    fflush(stdin);
    scanf("%d",&size);
    if(size<0){
        printf("Enter a positive number");
        return 0;
    }

    int *arr=NULL;
    arr=(int*)malloc(size*sizeof(int));
    for(int i=0;i<size;i++){
        printf("Enter %d value: ",i+1);
        fflush(stdin);
        scanf("%d",&arr[i]);
    }

    sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d value: %d\n",i+1,arr[i]);
    }

    return 0;
}

void sort(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                int a=arr[j];
                arr[j]=arr[i];
                arr[i]=a;
            }
        }
    }
}