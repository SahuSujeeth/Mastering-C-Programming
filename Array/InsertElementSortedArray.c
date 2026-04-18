#include <stdio.h>
int insertElement(int arr[], int n, int capacity, int element, int position)
{
    if (n == capacity)
    {
        return n;
    }
    int index = position - 1;
    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return (n + 1);
}
int main()
{
    int arr[10] = {2, 1, 3, 4, 6, 5};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, element = 92;
    int position = 3;
    printf("Before inserting the element\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int n2 = insertElement(arr, n, capacity, element, position);
    if (n2 > n)
    {
        printf("After inserting the element \n");
        for (int i = 0; i < n2; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
        printf("Their is no space for insert an element inside the array\n");
    return 0;
}