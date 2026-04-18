#include <stdio.h>
int searchArray(int arr[],int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
        
    }
    return -1;
    
}

int main (){
    int n;
    scanf("%d", &n);
    int arr[n];
    int key = 20;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int position = searchArray(arr,n,key);
    if (position == -1)
    {
        printf("Element is not found in the array\n");
    }
    
    else
    {
        printf("Element is found at the index %d\n",position);
        
    }
    return 0;
}
// Big O(n) -- Is the time complexity....
//Worst case is the while traversing whole array when the target is not present inn the array..
//When the array is sorted then we search the element by O(logn) by using the binary search algorithm...