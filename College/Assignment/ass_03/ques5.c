#include <stdio.h>
#include <stdlib.h>

struct queue 
{
    int *arr;
    int f , r;
    int size;
};

int isfull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
};

int isempty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
};

void enqueue(struct queue *q, int data){
    if(isfull(q) == 1){
        printf("Queuee is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = data;
    }
}
void dequeue(struct queue *q){
    if(isempty(q) == 1){
        printf("Queuee is empty\n");
    }
    else{
        printf("Deleted element = %d\n", q->arr[q->f + 1]);
        q->f++;
    }
}


int main()
{
    struct queue *q;
    q = (struct queue*)malloc(sizeof(struct queue));
    q->r = q->f =-1;
    q->size = 5;
    q->arr = (int*)malloc(q->size*sizeof(int));

    return 0;
}