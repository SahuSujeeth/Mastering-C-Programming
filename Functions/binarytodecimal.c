#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int last_index = strlen(str) - 1;
    int answer = 0;
    int base = 1;
    for (int i = last_index; i >= 0; i--)
    {
        int convert_num = str[i] - 48;
        answer = answer + (convert_num * base);
        base = base * 2;
    }
    printf("%d", answer);

    return 0;
}