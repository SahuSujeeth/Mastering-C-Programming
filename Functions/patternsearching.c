#include <stdio.h>
#include <string.h>
void search(char *s1, char *s2)
{
    int M = strlen(s1);
    int N = strlen(s2);
    for (int i = 0; i <= M - N; i++)
    {
        int a = i;
        int j;
        for (j = 0; j < N; j++)
        {
            if (s1[a] != s2[j])
            {
                break;
            }
            a++;
        }
        if (j == N)
            printf("Pattern found at the index %d\n", i);
    }
}

int main()
{
    char s1[] = "ABCCABC";
    char s2[] = "ABC";
    search(s1, s2);

    return 0;
}