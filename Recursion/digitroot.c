#include <stdio.h>

int main()
{
    int n = 1;
    int sum = 0;
    int ans = 0;
    while (n != 0)
    {
        int remainder = n % 10;
        n = n / 10;
        sum = sum + remainder;
    }
    if (sum < 10)
    {
        printf("%d", sum);
    }
    else
    {
        while (sum != 0)
        {
            int remainder = sum % 10;
            sum = sum / 10;
            ans = ans + remainder;
        }

        printf("%d\n", ans);
    }

    return 0;
}