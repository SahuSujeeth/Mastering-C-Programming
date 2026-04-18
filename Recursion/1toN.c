#include <stdio.h>
void printnto1(int n)
{
    if (n == 0)
        return;
    else
    {
        printnto1(n - 1);
        printf("%d\n", n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printnto1(n);
    return 0;
}