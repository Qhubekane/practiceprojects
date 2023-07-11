#include <stdio.h>

/**
 * sum of rows and columns in 2d array
 */

int main()
{
   int a[2][3], i, j, sumrow0, sumrow1, sumcol0, sumcol1, sumcol2;
   
   printf("Enter a 2x3 array\n");
   for(i=0;i<2;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d", &a[i][j]);
   
        if(i == 0)
        sumrow0 += a[i][j];
        else
        sumrow1 += a[i][j];
        
        if(j==0)
            sumcol0 += a[i][j];
        else if(j==1)
            sumcol1 += a[i][j];
        else
            sumcol2 += a[i][j];
       }
   }
   
  
   
   printf("You entered\n");
   
   for(i=0;i<2;i++)
   {
       printf("row %d\t", i);
       for(j=0;j<3;j++)
       {
           printf("%d\t", a[i][j]);
       }
       printf("\n");
   }
   
   printf("sumrow0 = %d\nsumrow1 = %d\nsumcol0 = %d\nsumcol1 = %d\nsumcol2 = %d ", sumrow0, sumrow1, sumcol0, sumcol1, sumcol2);

    return 0;
   
}
