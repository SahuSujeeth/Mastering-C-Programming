#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", &str);
    int length = strlen(str) - 1;
    char newString[100];
    int i;
    // while (str[i] != '\0')
    // {
    //    newString[i] = str[length];
    //    i++;
    //    length--;
    // }
    for (i = 0; str[i] != '\0'; i++, length--)
    {
        newString[i] = str[length];
    }
    newString[i]='\0';

    printf("%s\n", newString);

    return 0;
}