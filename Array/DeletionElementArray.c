#include <stdio.h>
int deleteElement(int arr[], int n, int element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            break;
        }
    }
    if (n == i)
        return n;
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return (n - 1);
}

int main()
{
    int arr[] = {2, 1, 3, 4, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 6;
    printf("Before inserting the element\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
   int  n2 = deleteElement(arr,n,element);
    if(n2<n)
    {
        for (int i = 0; i < n2; i++)
        {
            printf("%d ",arr[i]);
        }
    }
    else
    printf("Element is not present in the array\n");
    
    return 0;
}
// Time Complexcity:
// --> Insert - O(n)
// --> Search - O(n) for unsorted for sorted its O(log n) its by using binary search algorithm.
// --> Delete - O(n)
// --> ith element - O(1)
// --> update ith element - O(1)