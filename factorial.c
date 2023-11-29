#include <stdio.h>

int fact(int a)
{
    int factorial = 1, i;
    if (a == 1)
    {
        return a;
    }

    if (a > 1)
    {
        for (i = 1; i <= a; i++)
        {

            factorial = factorial * i;
        }
        printf("The factorial is %d", factorial);
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("Enter a number for factorial : ");
    scanf("%d", &n);
    fact(n);
}