#include <stdio.h>

int display(int arr[] , int size){
    // Traversal of an array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element , int maxsize, int index){
    // Insertion in an array
    if(size>=maxsize){
        return -1;
    }
    for (int i = size; i >= index; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index] = element;
    return 1;
    
}

int main()
{
    printf("Ritesh Dawani\n");
    printf("25/SET/BCSE/222\n");

    int arr[100]={1,6,9,49,75};
    int size = 5, element = 25, index = 3;
    display(arr, size);
    indInsertion(arr , size , element , 100, index);
    size +=1;
    display(arr, size);


    return 0;
}