#include <stdio.h>
int sum = 0, j = 0;
void rec(int arr[], int a)
{
    int i = 0;

    if (a > j)
    {
        sum = sum + arr[j];
        j++;
        rec(arr, a);
    }
}
int main()
{
    int a, i, arr[5];
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        scanf("%d", (arr + i));
    }
    rec(arr, a);
    printf("%d\n", sum);
}
