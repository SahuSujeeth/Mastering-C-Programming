#include <stdio.h>
void isTarget(int arr[], int n, int target)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("%d %d\n", j, i);
            }
        }
    }
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
    int target;
    scanf("%d", &target);
    isTarget(arr, n, target);
    return 0;
}