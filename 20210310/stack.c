#include <stdlib.h>
#include "stack.h"


t_stack newStack(){
    t_stack stack;
    stack.MAXSIZE=16;
    stack.c=(char*)malloc(stack.MAXSIZE*sizeof(char));
    stack.top=0;
    return stack;
}

void push(t_stack* stack,char c){
    if(stack->top==stack->MAXSIZE-1){
        stack->MAXSIZE+=4;
        stack->c=(char*)realloc(stack->c,stack->MAXSIZE*sizeof(char));
    }
    stack->top++;
    stack->c[stack->top]=c;
}

int isEmpty(t_stack* stack){
    if(stack->top!=0){
        return 0;
    }else{
        return 1;
    }
}

char pop(t_stack* stack){
    char ch='\0';
    if(!isEmpty(stack)){
        ch = stack->c[stack->top];
        stack->top--;
    }
    return ch;
}

void removeStack(t_stack* stack){
    free(stack->c);
}