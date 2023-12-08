#include <stdio.h>
int main()
{
    int boat, adult, child;
    adult = 75;
    child = 30;
    int no_a, no_c;
    scanf("%d %d %d", &boat, &no_a, &no_c);

    int a_weigh = no_a * adult;
    int c_weigh = no_c * child;
    int total = a_weigh + c_weigh;

    if (boat > total)
    {
        printf("Boat is stable");
    }
    else
    {
        printf("Boat will drown");
    }
}
