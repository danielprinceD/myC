#include <stdio.h>
int gcd(int a, int b)
{
    int great, low;
    if (a > b && a, b < 2)
    {
        great = a;
        low = 2;
    }
    else
    {
        great = b;
        low = 2;
    }

    while (great > low)
    {
        if (a % great == 0 && b % great == 0)
        {
            printf("The gcd of %d %d is %d ", a, b, great);
        }

        great--;
    }
}
int main()
{
    int a, b;

    do
    {
        printf("Enter two number : ");
        scanf("%d %d", &a, &b);
        gcd(a, b);
        printf("\n");
    } while (a > 0 || b > 0);
}