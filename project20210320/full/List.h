#include <stdio.h>
#include <stdlib.h>
#pragma once

typedef struct t_node{
    int item;
    int m;
    int c;
    struct t_node *next;
} t_node;

void init();
int add(int item, int m, int c);
int hasNext(t_node *p);
int getCurItem();
int getCurM();
int getCurC();
void printList();