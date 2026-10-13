#include <stdio.h>
#include <stdlib.h>

struct queue{
    int *arr;
    int r,f;
    int size;
};

int isfull(struct queue *cq){
    if((cq->r + 1) % cq->size == cq->f){
        return 1;
    }
    return 0;
};

int isempty(struct queue *cq){
    if(cq->r == cq->f){
        return 1;
    }
    return 0;
};

void cenqueue(struct queue *cq, int data){
    if(isfull(cq) == 1){
        printf("Queuee is full\n");
    }
    else{
        cq->r = (cq->r+1)%cq->size;
        cq->arr[cq->r] = data;
    }
}
void cdequeue(struct queue *cq){
    if(isempty(cq) == 1){
        printf("Queuee is empty\n");
    }
    else{
        printf("Deleted element = %d\n", cq->arr[(cq->f+1)%cq->size]);
        cq->f = (cq->f+1)%cq->size;
    }
}

int main()
{
    struct queue *cq = (struct queue*)malloc(cq->size*sizeof(struct queue));
    cq->size = 5;
    cq->r = cq->f = -1;
    cq->arr = (int*)malloc(sizeof(int));  
    return 0;
}