#include "tree.h"

treeNode_t *root;

treeNode_t *insert(int d)
{
    treeNode_t *tmp = (treeNode_t
                           *)malloc(sizeof(treeNode_t));
    treeNode_t *current = NULL;
    treeNode_t *parent = NULL;
    tmp->data = d;
    tmp->right = tmp->left = NULL;
    if (NULL == root)
    {
        root = tmp;
    }
    else
    {
        current = root;
        while (1)
        {
            parent = current;
            if (d < parent->data)
            {
                current = current->left;
                if (current == NULL)
                {
                    parent->left = tmp;
                    return tmp;
                }
            }
            else
            {
                current = current->right;
                if (current == NULL)
                {
                    parent->right = tmp;
                    return tmp;
                }
            }
        }
    }
}

void printTree()
{
    preorder(root);
}

void preorder(treeNode_t *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

void clear()
{
    free(root);
    root = NULL;
}

treeNode_t *search_rec(treeNode_t *t, int n)
{
    if (t != NULL)
        if (t->data < n)
            t = search_rec(t->right, n);
        else if (t->data > n)
            t = search_rec(t->left, n);
    return t;
}

treeNode_t *search(int d)
{

    /*treeNode_t *current = search_rec(root, d);*/

    treeNode_t *current = root;
    printf("Visiting elements: ");
    while (current->data != d)
    {
        if (current != NULL)
            printf("%d ", current->data);
        if (current->data > d)
            current = current->left;
        else
            current = current->right;
        if (current == NULL)
            return NULL;
    }
    return current;
}

int del(int n)
{
    treeNode_t *current = search(n);
    if (current->right == NULL && current->left != NULL)
    {
        printf("del =%d\n", current->left->data);
        current = current->left;
    }
    else if (current->right != NULL && current->left == NULL)
    {
        current = current->right;
    }
    return 0;
}