
int insertElement(int arr[], int n, int capacity, int element)
{
    if (n >= capacity)
    {
        return n;
    }
    arr[n] = element;
    return (n + 1);
}

int main()
{
    // int n;
    // scanf("%d",&n);
    int arr[10] = {2, 1, 3, 4, 6, 5};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, element = 7;
    printf("Before inserting the element\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int n2 = insertElement(arr, n, capacity, element);
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