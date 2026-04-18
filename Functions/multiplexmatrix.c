#include <stdio.h>
#define N 2
void multiply(int mat1[][N], int mat2[][N], int res[][N])
{
   
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < N; k++)
                res[i][j] = res[i][j] + (mat1[i][k] * mat2[k][j]);
        }
    }
}

int main()
{
    int mat1[N][N] = {{1, 2},
                      {3, 4}};
    int mat2[N][N] = {{1, 2},
                      {3, 4}};
    int res[N][N];
    multiply(mat1, mat2, res);

    printf("Result Matrix is \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
    return 0;
}