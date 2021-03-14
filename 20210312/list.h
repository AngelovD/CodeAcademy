#include <stdio.h>
#include <stdlib.h>

typedef struct t_node{
    int data;
    struct t_node *next;
} t_node;

void init();
int add(int data);
int delCur();
int getCur();
int getStart();
int hasNext(t_node *p);
int getElement(int n);