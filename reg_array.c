#include <stdio.h>

/**
 * program takes number, prints back and ask if you want to continue with registration.
 */

int main()
{
   int i;
   char a, answer;
   char number[11];
   
   printf("Enter cell number\n");
   for(i=0;i<10;i++)
   number[i] = getchar();
   {
   
   printf("You entered ");
   for(i=0;i<10;i++)
   putchar(number[i]);
   
   printf("\nDo you wish to continue with the registration?\n");
   printf("Y or N\n");
  
  getchar();
   answer = getchar();
   
   if (answer == 'Y' || answer == 'y')
        printf("Successfully registered");
    else if (answer == 'N' || answer == 'n')
        printf("Thank you, goodbye");
       return 0;
   }
}
