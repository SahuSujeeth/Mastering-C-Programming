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
// Time Complexity:
// -->worst case : O(n)->Happens when element not present in the array.
// -->Average case : O(n)
// -->Best Case : O(1)->Happen when the searched element present at the first.