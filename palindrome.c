#include <stdio.h>
int main()
{
    int num, rem, sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp = num;
    while (num > 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num /= 10;
    }
    if (sum == temp)
    {
        printf("This is palindrome number");
    }
    else
    {
        printf("Not a Palindrome number ");
    }
}