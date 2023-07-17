#include <stdio.h>

/**
 * this code multiplies 2 x 3 matrices and prints out the value.
 */

int main()
{
    int a[2][3], b[3][3], c[2][3], i, j, k, sum;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = 0;
            
            for(k=0;k<3;k++)
            {
                sum += a[i][k] * b[k][j];
                c[i][j] = sum;
            }
            
            printf("%d\t", c[i][j]);
            
        }
        printf("\n");
    }
}
