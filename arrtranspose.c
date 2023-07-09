#include <stdio.h>

#define OUTER 2
#define INNER 3

/**
 * transposes  a 2d array
 */

int main()
{
    int arr[OUTER][INNER], i, j;
    
    printf("enter values of array\n");
    
    for(i=0;i<OUTER;i++)
    {
        for(j=0;j<INNER;j++)
            scanf("%d", &arr[i][j]);
    }
    
    
    printf("\nYou have entered array:\n");
    
     for(i=0;i<OUTER;i++)
    {
        for(j=0;j<INNER;j++)
            printf("%d ", arr[i][j]);
            
        printf("\n");
    }
    
     printf("\nTransposed array:\n");
    
     for(i=0;i<INNER;i++)
    {
        for(j=0;j<OUTER;j++)
            printf("%d ", arr[j][i]);
            
        printf("\n");
    }

    return 0;
}
