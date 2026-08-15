#include <stdio.h>

int binarysearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low<=high)
    {
        mid = (low + high)/2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid]<element)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
    }
    return -1;
        
}

int main()
{
    int arr[] = {4,5,8,17,25,48,65,55,69,75,84,95,107};
    int size = sizeof(arr)/sizeof(int);
    int element = 69;
    int bsearch = binarysearch(arr, size, element);
    printf("%d is found at %d", element, bsearch);
    return 0;
}