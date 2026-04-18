#include <stdio.h>
int maxArray(int arr[], int n)
{
    int maxi = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    return maxi;
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
    printf("%d", maxArray(arr, n));

    return 0;
}