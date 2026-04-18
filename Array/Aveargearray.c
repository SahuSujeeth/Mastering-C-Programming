#include <stdio.h>
double averageArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return (double)sum / n;
}

int main()
{
    int arr[] = {2, 1, 3, 4, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%.2f", averageArray(arr, n));

    return 0;
}