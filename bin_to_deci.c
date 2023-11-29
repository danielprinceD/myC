#include <stdio.h>
int main()
{
    int bin;
    printf("Enter a binary value : ");
    scanf("%d", &bin);

    int cov_value = 0, factor = 1;

    while (bin > 0)
    {
        if (bin % 2 == 0)
        {
            cov_value += factor * 0;
        }
        else if (bin % 2 == 1)
        {
            cov_value += factor * 1;
        }
        factor *= 2;
        bin /= 10;
    }
    printf("Decimal Value is %d", cov_value);
}