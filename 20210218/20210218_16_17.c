/*Задача 16.
Имаме 2 сортирани масиви А и В с по 88 елемента.
Образувайте масив С с 2х88 елемента образуван от смесването на А и В,
така че С да съдържа елементите на А и В, но да е подреден и да не се
налага да го сортираме отново.
Насоки: Проверяваме от кой масив да вземем следващия елемент за
слагане в масива /цикъл и проверка./*/

/*Задача 17*.
Имаме 2 сортирани масиви А и В с различна размерност k и l и
произволни int числа.
Образувайте масив С, образуван от смесването на А и В, така че С да
съдържа елементите на А и В, но да е подреден и да не се налага да го
сортираме отново.*/

#include <stdio.h>
#include <stdlib.h>

void combine(int *arr1,int *arr2,const int size1,const int size2, int *rez);

int main(void){

    
    int arr1[4]={1,16,22,25};
    int arr2[3]={3,5,7};
    int *rez=NULL;
    rez=(int *)malloc((3+4)*sizeof(int));
    combine(arr1,arr2,4,3,rez);
    for(int i=0;i<7;i++){
        printf("%d\n",rez[i]);
    }

    free(rez);
    return 0;
}

void combine(int *arr1,int *arr2,const int size1,const int size2,int *rez){
    int i=0,j=0,counter=0;
    while(i<size1||j<size2){
        if((arr1[i]>arr2[j])&&j<size2){
            rez[counter]=arr2[j];
            j++;
            counter++;
        }else if((arr1[i]<arr2[j])&&i<size1){
            rez[counter]=arr1[i];
            i++;
            counter++;
        }else{
            rez[counter]=arr1[i];
            i++;
            counter++;
        }
    }

}