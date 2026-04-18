#include <stdio.h>
void isSortedandDistinct(int arr[])
{
    int result;

    for (int i = 0; i < 7; i++)
    {
        int j;
        for (j = 0; j <= i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
                ;
            }
        }
        if (i == j)
        {

            printf("%d ", arr[i]);
        }
    }
}

int main()
{

    int arr[7] = {1, 3, 3, 2, 2, 4, 5};
    isSortedandDistinct(arr);

    return 0;
}