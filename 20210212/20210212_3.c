#include <stdio.h>
#include <stdlib.h>

/*Задача 3 Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/

void arrFun(int *array);

int main(void){

    int *array=NULL;
    char c;
    do{
        arrFun(array);
        printf("Would you like to reallocate the array?(y,n): ");
        fflush(stdin);
        scanf("%c",&c);
    }while(c!='n');

    free(array);
    return 0;
}

void arrFun(int *array){
    int size;
    printf("Enter new array size: ");
    scanf("%d", &size);

    array = malloc(size * sizeof(int));

    for(int i=0;i<size;i++){
        int value;
        printf("Enter value: ");
        scanf("%d", &value);
        array[i]=value;
    }

    for(int i=0;i<size;i++){
        printf("Vlaue[%d]= %d\n",i,array[i]);
    }
}

