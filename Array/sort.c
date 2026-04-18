#include <stdio.h>
int sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            return 0;
        }
    }
    return 1;
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
    int answer = sort(arr, n);
    if (answer)
    {
        printf("Array is sorted\n");
    }
    else
        printf("Array is not sorted\n");

    printf("%d", answer);
}