#include <stdio.h>
#include <conio.h>
int swap(int a, int b)
{
    int temp = a, c;
    a = b;
    b = temp;
    printf("After Swapping : %d %d", a, b);
    printf("Do you want to continue  : ");
    c = getche();
}

int main()
{
    int a, b;
    printf("2 value : ");

    scanf("%d %d", &a, &b);

    printf("Before swap : %d %d", a, b);
    swap(a, b);
}