/*Задача 12. Представете служителите във фирма в структура с
членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
години, заплата в лева, указател към структурата, описващ неговия
началник. Напишете програма, която въвежда 10 служителя, които се
съхраняват в масив от описаните структури. Въвеждането на служителите
може да стане на два паса, първо въвеждане на всички данни без
указателя към началника и на втори пас, указване на всеки служител кой е
неговият началник. В решението трябва да се използва динамично
заделяне на памет и typedef.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct work{
    int num;
    char name[15];
    char mname[15];
    char lname[15];
    char job[15];
    int worktime;
    int salary;
    struct work* boss;
}Worker;



int main(void){
    Worker* workers;
    workers = (Worker*)malloc(sizeof(Worker)*10);
    for(int i=0;i<10;i++){
        Worker a={i,"Gosho","Pehso","Ivanov","Shef",i+2,i+1500};
        workers[i]=a;
    }

    workers[0].boss=&workers[9];
    for(int i=1;i<10;i++){
        workers[i].boss=&workers[i-1];
    }

    printf("Num: %d\nName: %s\nSalary: %d",workers[2].num,workers[2].name,workers[2].salary);

    return 0;
}