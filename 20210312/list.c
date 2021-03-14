
#include "list.h"


t_node *cur;
t_node *start;

void init()
{
    cur = NULL;
};

int add(int data)
{
    int flag=0;
    t_node *p = cur;
    if(cur==NULL){
        flag=1;
    }
    cur = (t_node *)malloc(sizeof(t_node));
    if (!cur)
        return -1;
    cur->data = data;
    cur->next = p;
    if(flag){
        start=cur;
    }
    return 0;
}

int delCur(){
    t_node *p=cur; 
    cur=cur->next;
    free(p);
}

int getCur(){
    return cur->data;
}

int getStart(){
    return start->data;
}

int hasNext(t_node *p){
    if(p->next!=NULL){
        return 1;
    }
    return 0;
}


int getElement(int n){
    t_node *p=cur;
    t_node *element=p;
    int counter=0;
    while(hasNext(p)){
        if(counter<n){
            counter++;
        }
        if(counter==n){
            element=element->next;
        }
        p=p->next;
    }
    if(counter==n){
        return element->data;
    }
    return -1;
}   