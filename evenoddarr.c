#include <stdio.h>
/**
  *takes 10 digits and looks for numbers that are even vs odd
  */

int main()
{
    int even = 0, odd = 0, arr[10], i;
    
    printf("enter 10 numbers to analyse\n");
    
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
        
        if(arr[i] % 2 == 0)
            even += 1;
        else
            odd += 1;
    }
    
    printf("even is %d and odd is %d", even, odd);

    return 0;
}
