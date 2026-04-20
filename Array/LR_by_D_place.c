#include <stdio.h>
void leftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]= temp;
}
void leftRotate(int arr[], int n, int d)
{
    for(int i=0;i<d;i++)
    {
      leftRotateOne(arr,n);
    }
}


int main (){
    int d;
    scanf("%d",&d);
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftRotate(arr,n,d);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}