#include "lib.h"

t_node *cur;

void init()
{
    cur = NULL;
};

int add(int item, int m, int c)
{   
    t_node *p = cur;
    cur = (t_node *)malloc(sizeof(t_node));
    if (!cur){
        return -1;
    }
    cur->item = item;
    cur->m = m;
    cur->c = c;
    cur->next = p;
    return 0;
}

int delCur(){
    t_node *p=cur; 
    cur=cur->next;
    free(p);
}

int getCurItem(){
    return cur->item;
}

int getCurM(){
    return cur->m;
}
int getCurC(){
    return cur->c;
}
int hasNext(t_node *p){
    if(p->next!=NULL){
        return 1;
    }
    return 0;
}


void printList(){
    t_node *p = cur;
    while (p!=NULL)
    {
        printf("Item: %d Weight: %d Value: %d\n",p->item+1,p->m,p->c);
        p=p->next;
    }
}