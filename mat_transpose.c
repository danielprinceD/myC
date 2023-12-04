#include <stdio.h>
int main()
{
    int mat[10][10], a, b, Tmat[10][10];
    int i, j;
    printf("Enter the size of the matrix : (column and row) ");
    scanf("%d %d", &a, &b);

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Matrix[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The Matrix : \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose of the matrix : \n");
    for (i = 0; i < b; i++)
    {
        for (j = 0; j < a; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }
}