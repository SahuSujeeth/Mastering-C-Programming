#include <stdio.h>
int binarySearch(int arr[], int n, int value)
{

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int n;
    printf("Enter the n :\n");
    scanf("%d", &n);

    int value;
    printf("Enter the value : \n");
    scanf("%d", &value);

    int arr[n];
    printf("Enter the elements : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int answer = binarySearch(arr, n, value);
    if (answer)
    {
        printf("%d\n", answer);
    }
    else
        printf("-1\n");

    return 0;
}