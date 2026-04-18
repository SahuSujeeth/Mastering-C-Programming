// } // This is with normal logic
// #include <stdio.h>

// int main()
// {
//     int n = 99999;
//     int count = 0;
//     for (int i = 0; n > 0; i++)
//     {
//         n = n / 10;
//         count++;
//     }
//     printf("%d", count);

//     return 0;

//This is with the recursive logic...
#include <stdio.h>
int countDigit(int n)
{
    if (n == 0)
        return 0;
    return 1 + countDigit(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);
    int result = countDigit(n);
    printf("%d\n", result);

    return 0;
}