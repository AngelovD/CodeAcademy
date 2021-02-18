#include <stdio.h>
#include <stdlib.h>

/*Задача 10.
Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.
Просто число е се нарича всяко естествено число, по-голямо от 1,
което има точно два естествени делителя – 1 и самото себе си.
Например 5 е просто, защото се дели единствено на 1 и 5, докато 6 не
е, защото се дели освен на 1 и 6, и на 2 и 3.*/

int fnSimple(int a);

int main(void){

    int a,(*check)(int)=NULL;
    check=fnSimple;

    printf("Enter number to check: ");
    scanf("%d",&a);

    printf("%d %s",a,(check(a))? "is prime":"isn't prime");

    return 0;
}



int fnSimple(int a){
    int size=1;
    int *rez=NULL;
    rez = malloc(size * sizeof(int));
    rez[0]=1;

    for(int i=2;i<1001;i++){
        int flag=1;
        for(int j=1;j<size;j++){
            if(i%rez[j]==0){
                flag=0;
                break;
            }
        }
        
        if(flag){
            size++;
            rez=realloc(rez,size*sizeof(int));
            rez[size-1]=i;  
        }
        
    }
    for( int i=0;i<size;i++){
        
        if(rez[i]==a){
            
            return 1;
        }
    }
    return 0;
}