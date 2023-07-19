#include <stdio.h>
#include <string.h>

// concatenates strings

#define N 50

int main()
{
    char s1[N], s2[N];
    int i, len1, len2;
    
    printf("enter s1\n");
    gets(s1);
    printf("enter s2\n");
    gets(s2);
    
    len1 = strlen(s1);
    len2 = strlen(s2);
    
    for(i=0;i<=len2;i++)
    {
        s1[len1+i] = s2[i];
    }
    
    printf("s1 cancat is %s\n", s1);
    
    printf("strlen 1 is now %d", strlen(s1));
}
