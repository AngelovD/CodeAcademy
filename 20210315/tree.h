#include <stdlib.h>
#include <stdio.h>

typedef struct treeNode_t
{
    int data;
    struct treeNode_t *left;
    struct treeNode_t *right;
} treeNode_t;



treeNode_t *insert(int d);
void printTree();
void preorder(treeNode_t *n);
treeNode_t *search(int d);
int del(int n);
void clear();
treeNode_t *search_rec(treeNode_t *t, int n);