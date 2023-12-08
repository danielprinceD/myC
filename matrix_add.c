#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d", &row);
    scanf("%d", &col);
    int mat[row][col], mat2[row][col];
    int sum[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = mat[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]);
        }
    }
}