#include <stdio.h>
int main()
{
    int mata[10][10], matb[10][10];
    int a, b, c, d;
    int i, j, k, ans = 0;
    int product[10][10];

    printf("Enter the size of matrix A (column and row ): ");
    scanf("%d %d", &a, &b);

    printf("Enter the matrix A : \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("A[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &mata[i][j]);
        }
    }
    printf("The Matrix A : \n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d\t", mata[i][j]);
        }
        printf("\n");
    }

    printf("Enter the size of matrix B (column and row ) : ");
    scanf("%d %d", &c, &d);

    printf("Enter the matrix B : \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            printf("B[%d][%d] = ", i + 1, j + 1);
            scanf("%d", &matb[i][j]);
        }
    }
    printf("The Matrix B : \n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            printf("%d\t", matb[i][j]);
        }
        printf("\n");
    }

    if (b == c)
    {
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                for (k = 0; k < c; k++)
                {
                    ans += mata[i][k] * matb[k][j];
                }
                product[i][j] = ans;
                ans = 0;
            }
        }
        printf("The complete matrix will be %d X %d\n", a, d);
        printf("The product of the matrices : \n");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                printf("%d\t", product[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter possible matrix");
    }
}