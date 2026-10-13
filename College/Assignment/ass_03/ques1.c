#include <stdio.h>
#include <stdlib.h>

int linearsearch(int a[], int size, int data){
    for(int i=0; i<size; i++){
        if(a[i]==data){
            return i;
        }
    }
    return -1;
}
int main()
{
    int size = 10;
    int arr[10] = {15,8,23,42,4,16,9,30,11,7}; // 1D Array
    int data = 16; // Data to find
    int dindex = linearsearch(arr, size, data);
    if (dindex != -1)
    {
        printf("%d is found at %d", data, dindex);
    }
    else{
        printf("%d not found ", data);
    }
    return 0;
}