#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int end = strlen(str) - 1;
    int start;
    for (start = 0; start < end; start++, end--)
    {
        if (str[start] != str[end])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");

    return 0;
}