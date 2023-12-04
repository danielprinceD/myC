#include <stdio.h>
#include <time.h>
int value[20], i = 0;
int lcm_2(int num)
{
    if (num > 1)
    {
        int rem = num % 2;
        value[i] = rem;
        i++;
        lcm_2(num / 2);
    }
    else if (num == 1)
    {
        value[i] = num;
    }
    else if (num == 0)
    {

        value[i] = num;
    }
}

int main()
{
    int deci_value;
    int num;

        clock_t start, end;
    double cpu_time;

    printf("Enter a number : ");
    scanf("%d", &deci_value);

    start = clock();
    if (deci_value > 0)
    {
        lcm_2(deci_value);
    }
    else
    {
        printf("%d", deci_value);
    }
    while (i >= 0)
    {
        printf("%d", value[i]);
        i--;
    }
    end = clock();

    cpu_time = (end - start) / CLOCKS_PER_SEC;

    printf("Seconds : %f", cpu_time);
}