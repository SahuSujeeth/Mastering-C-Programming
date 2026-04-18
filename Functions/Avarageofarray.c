 #include <stdio.h>
double avarageofArray(int arr[], int n)
 {
    int sum=0;
    for (int  i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return (double)sum/n;
   
    
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
    printf("%.1f",avarageofArray(arr,n));
    
  

    return 0;
}