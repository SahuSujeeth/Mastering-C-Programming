#include <stdio.h>
#include <stdlib.h>
int *getArray(int n)
{
    int *ptr = calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     *(ptr + i) = i + 1;
    // }
    return ptr;
}
int main()
{
    int n;
    scanf("%d", &n);
    int *ptr = getArray(n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}