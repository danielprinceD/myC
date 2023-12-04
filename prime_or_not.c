#include <stdio.h>
int main()
{
    int i, num, count = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count = count + 1;
        }
    }
    if (num == 1 || num == 2)
    {
        printf("Neither Prime nor non-prime ");
    }
    else if (count == 2)
    {
        printf("The number is prime ");
    }
    else
    {
        printf("The number is not prime");
    }
}