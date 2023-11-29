#include <stdio.h>
#include <math.h>
int main()
{
    int num, sum = 0, fact = 1;
    printf("Enter a number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        int rem1 = num % 10;
        if (rem1 == 0)
        {
            sum += (1 * fact);
        }
        else
        {
            sum += rem1 * fact;
        }
        num /= 10;
        fact *= 10;
    }
    printf("Coverted Number is : %d", sum);
}