#include <stdio.h>
void reverse(int arr[],int low , int high)
{
 while(low<high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

int main (){
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=n-1;
    reverse(arr,low,high);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        
    }
    return 0;
}