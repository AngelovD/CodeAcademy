typedef struct{
    char *c;
    int top;
    int MAXSIZE;
}t_stack;

t_stack newStack();
void push(t_stack* stack, char c);
char pop(t_stack* stack);
int isEmpty(t_stack* stack);