#include <stdio.h>
void printnto1(int n)
{
    if (n == 0)
        return;
    else
    {
        printf("%d\n", n);
        printnto1(n - 1);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    printnto1(n);
    return 0;
}