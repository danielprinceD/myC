#include <stdio.h>
int main()
{
    int num, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        int remainder = num % 10;
        sum = sum * 10 + remainder;
        num /= 10;
    }
    printf("The reverse number : %d", sum);
}