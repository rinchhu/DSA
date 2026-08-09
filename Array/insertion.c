#include <stdio.h>

int display(int arr[] , int size){
    // Traversal of an array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100]={1,6,9,75};
    int size = 4;
    display(arr, size);

    return 0;
}