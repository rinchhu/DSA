#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *s){
    if(s->top == -1){
        return 1;   
    }
    return 0;
}

int isfull(struct stack *s){
    if(s->top == s->size-1){
        return 1;
    }
    return 0;
}

void push(struct stack *s, int d){
    if(isfull(s)==0){
        s->top++;
        s->arr[s->top] = d;
    }
    else{
        printf("stack is full \n");
    }
}

void pop(struct stack *s, int d){
    if(isempty(s)==0){
        printf("Popped element = %d\n", s->arr[s->top]);
        s->top--;
    }
    else{
        printf("stack is empty \n");
    }
}

int main()
{
    struct stack *s;
    s = (struct stack*)malloc(sizeof(struct stack));
    s->top = -1;
    s->size = 5;
    s->arr = (int*)malloc(s->size*sizeof(int));
    return 0;
}