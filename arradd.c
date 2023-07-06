#include <stdio.h>

//adding two arrays and printing sum in third array.

int main()
{
    int arr1[5], arr2[5], arr3[5], i;
    
    printf("Enter values for array 1\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter values for array 2\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    for(i=0;i<5;i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    
    printf("array sum is");
    for(i=0;i<5;i++)
        printf("%d, ", arr3[i]);

    return 0;
}
