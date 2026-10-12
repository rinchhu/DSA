#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int f;
    int b;
    int *arr;
};

int isfull(struct queue* q){
    if(q->b==q->size-1){
        return 1;
    }
    return 0;
}

int isempty(struct queue* q){
    if(q->b==q->f){
        return 1;
    }
    return 0;
}

void enqueue(struct queue* q, int val){
    if(isfull(q)){
        printf("Queue is full!\n");
    }
    else{
        q->b++;
        q->arr[q->b]=val;
    }
}

int dequeue(struct queue* q){
    int a = -1;
    if(isempty(q)){
        printf("Queue is empty!!\n");
    }
    else{
        q->f++;
        return q->arr[q->f];
    }
    return a;
}

int main()
{
    struct queue q;
    q.size = 5;
    q.f=q.b=-1;
    q.arr = (int*)malloc(q.size*sizeof(int));

    dequeue(&q);

    enqueue(&q, 5);
    enqueue(&q, 9);
    enqueue(&q, 7);
    enqueue(&q, 8);
    enqueue(&q, 1);

    enqueue(&q, 1);


    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));

    dequeue(&q);

    return 0;
}