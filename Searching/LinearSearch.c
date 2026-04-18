#include <stdio.h>

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
    int i;
    for ( i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("%d element is present at the position %d \n", value, i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("%d is not present in the array\n");
    }

    return 0;
}