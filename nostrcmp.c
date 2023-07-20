#include <stdio.h>

//compares strings without using "strcmp"

#define N 50

int main()
{
    char s1[N], s2[N];
    int i, value = 0;
    
    printf("Enter your string1\n");
    scanf("%s", s1);
    
    printf("Enter string 2\n");
    scanf("%s", s2);
    
    for(i=0; s1[i] != '\0' || s2[i] != '\0'; i++)
    {
        if(s1[i] != s2[i])
        {
        value = 1;
        printf("string 1 and string 2 are not the same\n");
        break;
        }
    }
    
    printf("Value is %d", value);
}
