#include <stdio.h>

/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/

int linear_search(int *a, int n, int key);

int main(void){

    int arr[]={1,2,3,4,5};

    printf("%d",linear_search(arr,5,5));

    return 0;
}

int linear_search(int *a, int n, int key){
    int *p=a+n;
    while(a<=p){
        if(*a==key){
            return a-(p-n);
        }
        a++;
    }
    return 0;
}