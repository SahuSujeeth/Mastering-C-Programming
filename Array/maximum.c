#include <stdio.h>
int maxElement(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] > max;
        max = arr[i];
    }
    return max;
}

int main()
{
    int arr[] = {1, 2, 3, 4,13, 92};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%d", maxElement(arr, n));

    return 0;
}