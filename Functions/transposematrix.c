#include <stdio.h>
#define M 3
#define N 4
void transpose(int arr[][N], int brr[][M])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
}

int main()
{

    int arr[M][N];
    int brr[N][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    transpose(arr, brr);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}