#include <stdio.h>

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void remove_duplicate(int arr[], int size, int *d)
{
    int initialsize = size;
    for (int i = 0; i < initialsize; i++)
    {
        for (int j = i+1; j < initialsize; j++)
        {
            if (arr[i]==arr[j])
            {

                *d = *d+1;
                for (int k = j; k < initialsize-1; k++)
                {
                    arr[k] = arr[k+1];
                }
                initialsize = initialsize - 1;
                j = j -1;
            }

            
        }
        
    }
    
}


int main()
{
    int arr[]= {2,5,6,6,7,2,9};
    int size = sizeof(arr)/sizeof(int);
    int d = 0;
    print_array(arr, size);
    remove_duplicate(arr, size, &d);
    size = size - d;
    print_array(arr, size);

    return 0;
}