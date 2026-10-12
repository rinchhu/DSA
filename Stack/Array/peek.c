#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isempty(struct stack *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    return 0;
}

int isfull(struct stack *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *p, int val)
{
    if (isfull(p))
    {
        printf("Overflow!\n");
    }
    else
    {
        p->top++;
        p->arr[p->top] = val;
    }
}

int pop(struct stack *p)
{
    if (isempty(p))
    {
        return 1;
    }
    else
    {
        int a = p->arr[p->top];
        p->top--;
        return a;
    }
}

int peek(struct stack*p, int i){
    int a = p->top-i+1;
    if(a < 0){
        printf("Invalid index!");
        return -1;
    }
    else{
        return p->arr[a];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 6;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("%d\n", isempty(sp));
    printf("%d\n", isfull(sp));

    push(sp, 5);
    push(sp, 6);
    push(sp, 9);

    push(sp, 10);
    push(sp, 7);
    push(sp, 9);
    push(sp, 12); // OVERFLOW!!!

    printf("pop element: %d\n", pop(sp));
    printf("pop element: %d\n", pop(sp));

    printf("pop element: %d\n", pop(sp));

    for (int j = 1; j <=sp->top+1; j++)
    {
        printf("Elemnt at %d : %d\n", j , peek(sp,j));
    }
    
    return 0;
}