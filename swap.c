#include <stdio.h>
int main()
{
    // int empty[10];
    int a = 350, b = 92498;

    printf("Before Swapping : %d %d\n", a, b);

    // empty[0] = a;
    // a = b;
    // b = empty[0];

    a *= b;
    b = a / b;
    a /= b;

    printf("Afters Swapping : %d %d", a, b);
}