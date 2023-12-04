#include <stdio.h>
int main()
{
    int num, rem, i, j = 0;
    int n[3] = {4, 2, 1};
    int ans[30], value = 0;

    printf("Enter a number : ");
    scanf("%d", &num);

    while (num > 0)
    {
        rem = num % 10;
        if (rem < 8)
        {

            for (i = 0; i <= 2; i++)
            {
                if (n[i] == rem)
                {
                    ans[i] = 1;
                    j += 3;
                }
            }
            if (n[0] + n[1] + n[2] == rem)
            {
                ans[j] = ans[j + 1] = ans[j + 2] = 1;
                j = j + 3;
            }
            else if (n[1] + n[2] == rem)
            {
                ans[j + 1] = ans[j + 2] = 1;
                ans[j] = 0;
                j += 3;
            }
            else if (n[0] + n[1] == rem)
            {
                ans[j] = ans[j + 1] = 1;
                ans[j + 2] = 0;
                j += 3;
            }
            else if (n[0] + n[2] == rem)
            {
                ans[j] = 1;
                ans[j + 2] = 1;
                ans[j + 1] = 0;
                j += 3;
            }
        }
        else
        {
            printf("Not a possible octal number");
        }
        num /= 10;
    }

    j--;

    while (j >= 0)
    {
        printf("%d", ans[j]);
        j--;
    }
}