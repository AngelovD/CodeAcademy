/*Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват
масиви с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int num;
    char *name;
    char *lname;
    int age;
}Runner;

Runner create(int num,char name[], char lname[],int age){
    Runner runner;
    runner.num=num;
    int i=0;
    int size=3;
    runner.name=(char*)malloc(size);
    
    while (name[i]!='\0')
    {
        if(i==size-1){
            size+=2;
            realloc(runner.name,size);
        }
        runner.name[i]=name[i];
        i++;
    }
    i=0;
    size=3;
    runner.lname=(char*)malloc(size);
    
    while (lname[i]!='\0')
    {
        if(i==size-1){
            size+=3;
            realloc(runner.lname,size);
        }
        runner.lname[i]=lname[i];
        i++;
    }
    runner.age=age;
    return runner;
}

void sort(Runner *runners,int size);

int main(void){

    Runner runners[3];
    runners[0]=create(12,"Gosho","Petrov",16);
    runners[1]=create(15,"Ivan","Ivanov",17);
    runners[2]=create(14,"Pesho","Petrov",16);

    for(int i=0;i<3;i++){
        printf("\n%d    %s    %s   %d",runners[i].num,runners[i].name,runners[i].lname,runners[i].age);
    }

    sort(runners,3);

    for(int i=0;i<3;i++){
        printf("\n%d    %s    %s   %d",runners[i].num,runners[i].name,runners[i].lname,runners[i].age);
    }
    

    return 0;
}

void sort(Runner *runners,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            int z=0;
            while(runners[i].name[z]!='\0'&&runners[j].name[z]!='\0'){
                if(runners[i].name[z]<runners[j].name[z]){
                    Runner runner=runners[j];
                    runners[j]=runners[i];
                    runners[i]=runner;
                    break;
                }
                z++;
            }
        }
    }
}