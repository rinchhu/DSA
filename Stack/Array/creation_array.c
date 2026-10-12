#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}

int isfull(struct stack *s){
    if(s->top == s->size-1){
        return -1;
    }
    return 0;
}

int main()
{
    // struct stack s;
    // s.size = 6;
    // s.top = -1;   
    // s.arr = (int*)malloc(s.size*sizeof(int));
    struct stack *s = (struct stack*)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1;   
    s->arr = (int*)malloc(s->size*sizeof(int));

    s->arr[0] = 7;
    s->top++;

    if (isfull(s)==1)
    {
        printf("stack is full");
    }
    else
    {
        printf("stack is not full");
    }
    
    
    return 0;
}