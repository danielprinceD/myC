#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int q, w, e;

    q = (a * b) / 100;

    printf("%d\n", q);

    w = ((a - q) * c) / 100;

    printf("%d\n", w);

    e = (a - (q + w)) / 3;
    printf("%d", e);
}