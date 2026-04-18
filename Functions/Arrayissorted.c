#include <stdio.h>
int result;
int sorted(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            result = 1;
        }
        else
        {
            result = 0;
            break;
        }
    }
    if (result)
    {
        printf("Sorted\n");
    }
    else
    {
        printf("Not sorted\n");
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
    sorted(arr, n);

    return 0;
}