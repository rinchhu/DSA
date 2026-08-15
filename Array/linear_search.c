#include <stdio.h>

int linearsearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
    
}

int main()
{
    int arr[] = {1,5,59,5,6,44,9,49,4,94,6,4,7};
    int size = sizeof(arr)/sizeof(int);
    int element = 44;
    int lsearch = linearsearch(arr, size, element);
    printf("%d is found at %d", element, lsearch);
    return 0;
}