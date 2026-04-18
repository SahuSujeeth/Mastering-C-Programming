#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char answer[100];
    int i;
    for ( i = 0; n > 0; i++)
    {
        int remainder = n % 2;
        char num = remainder + 48;
        answer[i] = num;
        n = n / 2;
    }
    answer[i] = '\0';
    char newString[100];
    int lenght = strlen(answer) - 1;
    int j;
    for ( j = 0; answer[j] != '\0'; j++, lenght--)
    {
        newString[j] = answer[lenght];
    }
    newString[j] = '\0';
    printf("%s", newString);

    return 0;
}