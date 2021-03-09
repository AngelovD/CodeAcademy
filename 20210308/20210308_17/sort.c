#include <stdio.h>
#include "lib.h"
#include <stdlib.h>

void sort(t_runner* runners,int size);

int main(){
    t_runner* runners;
    int runner_count;
    fflush(stdin);
    scanf("%d",&runner_count);
    printf("Runner count: %d\n\n",runner_count);
    printf("Unsorted: \n");
    runners = (t_runner*)malloc(runner_count*sizeof(t_runner));
    for(int i=0;i<runner_count;i++){
        int num,age;
        char name[15];
        char lname[15];
        scanf("%d %s %s %d\n",&num,name,lname,&age);
        printf("%d %s %s %d\n\n",num,name,lname,age);
        runners[i]=newRunner(num,name,lname,age);
    }
    printf("Sorted: \n");
    sort(runners,runner_count);
    
    for(int i=0;i<runner_count;i++){
        printf("%d %s %s %d\n\n",runners[i].num,runners[i].name,runners[i].lname,runners[i].age);
    }
    return 0;
}

void sort(t_runner *runners,int size){
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            int z=0;
            while(runners[i].name[z]!='\0'&&runners[j].name[z]!='\0'){
                
                if(runners[i].name[z]<runners[j].name[z]){
                    
                    t_runner runner=runners[j];
                    runners[j]=runners[i];
                    runners[i]=runner;
                    break;
                }
                z++;
            }
        }
    }
}