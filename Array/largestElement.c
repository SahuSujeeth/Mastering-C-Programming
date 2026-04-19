#include <stdio.h>
int getLargest(int arr[], int n)
{
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}
int secondLargest(int arr[],int n)
{
    int largest = getLargest(arr,n);
    int result = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (result == -1)
            {
                result = i;
            }
            else if (arr[i] > arr[result])
            {
                result = i;
            }
            
        }
        
    }
    return result;
    
}

int main()
{
    int arr[] = {10, 10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Largest = secondLargest(arr, n);
    printf("%d\n", Largest);
    printf("%d", arr[Largest]);

    return 0;
}