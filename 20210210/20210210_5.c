#include <stdio.h>

/*Задача 5. Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:
int sum_array(const int a[], int n){
int i, sum = 0;
for(i = 0; i < n; i++){
sum += a[ i ];
return sum;
}
*/

/*Задача 5. Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.
void sort ( int a[], int n){
int i, j, temp;
for ( i = 0; i < n - 1; ++i )
for ( j = i + 1; j < n; ++j )
if ( a[i] > a[j] ) {
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}*/

void sort ( int *a, int n);
int sum_array(int *a, int n);

int main(void){

    int a[]={1,2,3,4,555,8,6};
    sort(a,7);

    printf("%d\n",sum_array(a,7));
    for(int i=0;i<7;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

void sort ( int *a, int n){
    int *p=a+n;
    while(a<=p){
        int *temp=a+1;
        while(temp<=p){
            if(*temp>*a){
                *a=*temp+*a;
                *temp=*a-*temp;
                *a=*a-*temp;
            }
            temp++;
        }
        a++;
    }
}

int sum_array(int *a, int n){
    int *p=a+n;
    int rez;
    while(a<=p){
        rez+=*a;
        a++;
    }
    return rez;

}