#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = "geeks for geeks";
    char pat[] = "eek";
    char *p = strstr(text, pat);
    // if (p)
    // {
    //     printf("First occurance is at index %d\n",p-text);
    // }
    // else
    // printf("Not found\n"); // this is for the only for 1 occurance..
    if (p == NULL)
    {
        printf("Not found\n");
        return 0;
    }
    while (p)
    {
        printf("%d\n", p - text);
        p = strstr(p + 1, pat);
    }

    return 0;
}