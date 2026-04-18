#include <stdio.h>
int araryCount(int arr[], int n)
{
    int result = 1;
    for (int i = 1; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            result++;
        }
    }
    return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", araryCount(arr, n));

    return 0;
}