/**
 * Reads values of 2 d array, prints them and calculate sum
 */

#include <stdio.h>

int main()
{
    int arr[3][4], i, j, sum = 0;
    
    printf("Enter your 2d array values\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("sum is %d", sum);
    return 0;
}
