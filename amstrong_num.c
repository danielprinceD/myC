#include <stdio.h>
#include <math.h>

int amstrong(int a)
{
    int i = 0, r, value = a, temp = a;
    int count = 0;
    if (a <= 0)
    {
        printf("Enter a valid i/p");
    }
    int fact = 1, ans = 0;
    while (temp > 0)
    {

        r = temp % 10;
        count = count + 1;
        temp = temp / 10;
    }

    while (a > 0)
    {
        int last = a % 10;
        ans += pow(last, count);

        a /= 10;
    }
    if (ans == value)
    {
        printf("The number is Amstrong %d", value);
    }
    else
    {
        printf("%d Not Amstrong", ans);
    }
}

int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    amstrong(num);
}