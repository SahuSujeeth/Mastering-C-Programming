#include <stdio.h>
int firstOccurance(int arr[], int n, int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
             high = mid - 1;
        }
        else
        {
             low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // int N;
    // scanf("%d", &N);
    int x = 100;
    int arr[] = {1, 1, 3, 10, 10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int answer = firstOccurance(arr, n, x);
    if (answer>0)
    {
        printf("%d element is present at the index of %d\n", x, answer);
    }
    else
    {
        printf("%d element is not present in the array\n",x);
    }

    return 0;
}