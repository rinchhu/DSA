#include <stdio.h>
#include <stdlib.h>


// Abstract DataType

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct myArray * a , int tsize , int usize){
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}

void set_val(struct myArray * a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("enter element %d = ", i);
        scanf("%d", &n);
        (a->ptr)[i]=n;
    }
    
}

void show(struct myArray *a){
    for (int i = 0; i < a->used_size; i++)
    {
        printf("elment %d = %d ", i , (a->ptr)[i]);
        printf("\n");

    }
    
}

int main()
{
    struct myArray arr;
    createarray(&arr, 15, 5);
    printf("we are running set val \n");
    set_val(&arr);
    printf("we are running show \n");
    show(&arr);
    return 0;
}