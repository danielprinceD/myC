#include <stdio.h>
int main()
{
    int i = 100, num, count = 0, j;
    scanf("%d", &num);
    while (i < num + 100)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
        else
        {
            num++;
        }

        i++;
        count = 0;
    }
}