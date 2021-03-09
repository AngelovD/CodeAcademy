#include "lib.h"
#include <stdlib.h>

t_runner newRunner(int num,char name[], char lname[],int age){
    t_runner runner;
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