/*Пренапишете задачи 14 и 15 от лекция 22 за Потребителски
типове като пуснете двете екзета в pipe:
maraton.exe | sort.exe
Задача 14 Напишете програма, в която се въвеждат пореден
номер, име, фамилия, възраст на участници в маратон.
Изискването е, за името и фамилията, да не се използват масиви
с фиксирана дължина. След като въвеждането завърши,
изведете списък с участниците.
Задача 15 Използвайки предишното упражнение, изведете
участниците подредени по азбучен ред.*/

#include <stdio.h>
#include "lib.h"
#include <stdlib.h>

int main(void){

    t_runner* runners;
    int runner_count=3;
    runners = (t_runner*)malloc(runner_count*sizeof(t_runner));
    runners[0]=newRunner(13,"Ivan","Ivanov",16);
    runners[1]=newRunner(12,"Gosho","Ivanov",19);
    runners[2]=newRunner(14,"Petyr","Ivanov",17);
    printf("%d\n",runner_count);
    for(int i=0;i<runner_count;i++){
        printf("%d %s %s %d\n",runners[i].num,runners[i].name,runners[i].lname,runners[i].age);
        free(runners[i].name);
        free(runners[i].lname);
    }
    free(runners);
    return 0;
}