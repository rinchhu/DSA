#include <stdio.h>
#include <stdlib.h>

struct queue{
    int *arr;
    int f,r;
    int size;
};

int isfull(struct queue *q){
    if(q->r == q->size-1){
        printf("Queue is fn call \n");
        return -1;
    }
    return 0;
}

int isempty(struct queue *q){
    if(q->r == q->f){
        printf("Queue is empty fn call\n");
        return -1;
    }
    return 0;
}

void enqueue(struct queue *q, int data){
    if(isfull(q)){
        printf("Queue is full \n");
    }
    else{
        q->r = q->r + 1;
        q->arr[q->r] = data;
    }
}

int dequeue(struct queue *q){
    if(isempty(q)){
        printf("Queue is empty \n");
    }
    else{
        q->f = q->f + 1;
        return q->arr[q->f];
    }
    return -1;
}


int main()
{
    struct queue q;
    q.size = 5;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));
    printf("Ritesh Dawani\n");
    printf("222\n");

    dequeue(&q);

    enqueue(&q, 5);
    enqueue(&q, 6);
    enqueue(&q, 8);
    enqueue(&q, 9);
    enqueue(&q, 1);
    enqueue(&q, 2);

    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));

    return 0;
}