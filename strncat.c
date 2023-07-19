#include <stdio.h>
#include <string.h>

#define N 50

// string concatenates using strncat

int main()
{
    char s1[N], s2[N], cat;
    int i, len1, len2;
    
    printf("enter s1\n");
    gets(s1);
    printf("enter s2\n");
    gets(s2);
    
    strncat(s1,s2, sizeof(s1) - strlen(s1) - 1);
    
    printf("string is now %s", s1);
}
