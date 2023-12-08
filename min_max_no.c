#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    printf("The maximun value : %d", ((a + b) + abs(a - b)) / 2);
    printf("The minimum value : %d", ((a + b) - abs(a - b)) / 2);
}