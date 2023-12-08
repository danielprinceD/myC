#include <stdio.h>
// int countEven(int a, int *b);
// int countOdd(int a, int *b);
int main()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Odd: %d\n", num / 2);
        printf("Even: %d", num / 2);
    }
    else
    {
        printf("Odd: %d\n", (num / 2) + 1);
        printf("Even: %d", (num / 2));
    }
}