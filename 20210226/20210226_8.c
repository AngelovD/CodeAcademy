/*Напишете програма, която да създаде стек (LIFO) по подобие на този
от лекция 18, който обаче да бъде реализиран с динамично с динамично
заделяне на памет съобразно желанието на потребителя с функциите
malloc(), и free(). Стека да има следните функции (следното API):
struct Stack{
int *contents;
int top;
};
Stack create(int size); void destroy(Stack s);
int pop(); void push()
int top()
int isFull(); int isEmpty(void)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *contents;
    int top;
    int MAXSIZE;
}Stack;

Stack create(int size);
void destroy(Stack s);
int pop(Stack* s);
void push(Stack* s,int a);
int top(Stack* s);
int isFull(Stack* s);
int isEmpty(Stack* s);

int main(void){
    Stack stack=create(12);
    Stack *s=&stack;
    push(s,14);
    push(s,15);
    push(s,16);
    push(s,17);
    push(s,18);
    push(s,19);
    push(s,20);
    push(s,21);
    push(s,22);
    push(s,23);
    push(s,24);
    push(s,25);
    push(s,26);
    printf("\n%d\n",pop(s));

    return 0;
}

Stack create(int size){
    Stack stack;
    stack.MAXSIZE=size;
    stack.top=0;
    stack.contents=(int*)malloc(size*sizeof(int));
    return stack;
}

void destroy(Stack s){
    free(s.contents);
}

int pop(Stack* s){
    int res=0;
    if(!isEmpty(s)){
        res=s->contents[s->top];
        s->top--;
    }else{
        printf("\nStack is empty\n");
    }
    
    return res;

}
void push(Stack* s,int a){
    
    if(!isFull(s)){
        s->top++;
        s->contents[s->top]=a;
    }else{
        printf("\nStack is full\n");
    }
}
int top(Stack* s){
    return s->top;
}
int isFull(Stack* s){
    if(s->MAXSIZE==s->top){
        return 1;
    }
    return 0;
}
int isEmpty(Stack* s){
    if(s->top==0){
        return 1;
    }
    return 0;
}