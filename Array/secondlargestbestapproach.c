#include <stdio.h>
int secondLargestelement(int arr[], int n)
{
    int result = -1, largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            result = largest;
            largest = i;
        }

        else if (arr[i] != arr[largest])
        {
            if (result == -1 || arr[i] > arr[result])
            {
                result = i;
            }
        }
    }
    return result;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int element = secondLargestelement(arr, n);
    // This is for the second largest element value...
    if (element >= 0)
    {
        printf("%d\n", arr[element]);
    }
    // This is for the second largest element index...
    printf("%d\n", element);

    return 0;
}