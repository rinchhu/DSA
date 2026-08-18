#include <stdio.h>

float percent(int arr[])
{
    float sum = 0.0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    return (sum/500.0)*100;
    
}

int main()
{   
    int arr[5];
    int i = 0;
    int j = 0;
    while (i<5)
    {
        printf("Enter marks of subject %d = ", i+1);
        scanf("%d", &arr[i]);
        if (arr[i]<0 || arr[i]>100)
        {
            printf("No should not be greater than 100 and not be less than 0 \n");
            i = i-1;
            j = j+1;
            printf("You have %d attempts left \n", 4-j);
        }
        if (j>4)
        {
            printf("You have done 4 wrong attemps \n");
            break;
        }
        i = i+1;
        
    }

    printf("Percenatge = %f", percent(arr));
    
    
    return 0;
}