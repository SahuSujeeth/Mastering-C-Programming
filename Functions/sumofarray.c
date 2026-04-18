 #include <stdio.h>
 int sumArray(int arr[], int n)
 {
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    // return (float)sum/n;
    return sum;
    
 }
 
 
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d",sumArray(arr,n));
    
  

    return 0;
}