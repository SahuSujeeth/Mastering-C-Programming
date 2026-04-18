#include <stdio.h>
#include <stdlib.h>
int count = 0;
int *result;
int *getSmallerelement(int arr[], int n, int x)
{
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            count = count + 1;
        }
    }
    result = (int *)malloc(count * sizeof(int));
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            result[count++] = arr[i];
        }
    }
    return result;
}

int main()
{
    int arr[] = {3, 2, 5, 2, 5, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;
    getSmallerelement(arr, n, x);
    for (int i = 0; i < count; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}