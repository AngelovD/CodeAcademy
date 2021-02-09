#include <stdio.h>

/*6. Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */

int getMax(int *a,int l);

int main(void){
    int a[5]={0};
    for(int i=0;i<5;i++){
        printf("Enter value: ");
        scanf("%d",&a[i]);
    }
    printf("%d",getMax(a,sizeof(a)/sizeof(*a)));
    return 0;
}

int getMax(int *a,int l){
    int check=a[0];
    for(int i=1;i<=l;i++){
        if(a[i]>check){
            check=a[i];
        }
    }
    return check;
}