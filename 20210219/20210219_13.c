#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/*Задача 13. Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.*/

struct experience{
    int m_years;
    int m_months;
};

struct employee{
    int m_id;
    char *m_name;
    char *m_mname;
    char *m_lname;
    char *m_job;
    struct experience m_experience;
    int m_pay;
    struct employee *manager;
};

struct experience makeExperience(int years, int months);
struct employee makeEmployee(int id,char *name,char *mname,char *lname,char *job,struct experience experience,int pay);
void fillEmployeeArray(struct employee arr[],int size);
void printEmployees(struct employee arr[],int size);

int main(void){
    srand(time(NULL));
    

    struct employee employees[10];
    fillEmployeeArray(employees,10);
    employees[0].manager=&employees[9];
    for(int i=1;i<10;i++){
        employees[i].manager=&employees[i-1];
    }

    printEmployees(employees,10);
    
    return 0;
}

struct experience makeExperience(int years, int months){
    years+=months/12;
    months=months%12;
    struct experience experience={years,months};
    return experience;
}

struct employee makeEmployee(int id,char *name,char *mname,char *lname,char *job,struct experience experience,int pay){
    struct employee employee={id,name,mname,lname,job,experience,pay,NULL};
    return employee;
}

void fillEmployeeArray(struct employee arr[],int size){

    for(int i=0;i<size;i++){
        arr[i]=makeEmployee(rand()%1000,"Pesho","Ivanov","Petrov","Shef",makeExperience(rand()%10,(rand()%12)+1),rand()%3000+1000);
    }
}


void printEmployees(struct employee arr[],int size){
    for(int i=0;i<size;i++){
        printf("Id: %d\n",arr[i].m_id);
        printf("Name: %s\n",arr[i].m_name);
        printf("MName: %s\n",arr[i].m_mname);
        printf("LName: %s\n",arr[i].m_lname);
        printf("Job: %s\n",arr[i].m_job);
        printf("Experience: %d yers %d months\n",arr[i].m_experience.m_years,arr[i].m_experience.m_months);
        printf("Pay: %d\n",arr[i].m_pay);
        printf("Manager id: %d\n",arr[i].manager->m_id);
        printf("\n\n");
    }
}