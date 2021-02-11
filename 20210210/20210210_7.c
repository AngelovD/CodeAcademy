#include <stdio.h>

/*Задача 7. Разгледайте и имплементирайте quicksort алгоритъма.*/

void quicksort(int number[25],int first,int last);

int main(void){

    int arr[5]={2,8,4,1,7};
    for(int i=0;i<5;i++){
        printf("Old: %d\n",arr[i]);
    }

    quicksort(arr,0,4);
    printf("\n\n");

    for(int i=0;i<5;i++){
        printf("New: %d\n",arr[i]);
    }

    return 0;
}


void quicksort(int number[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
            i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }

      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

   }
}