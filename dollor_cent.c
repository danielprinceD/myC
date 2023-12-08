#include <stdio.h>
#include <math.h>
int main()
{
    float dollar1, cent1, dollar2, cent2;
    scanf("%f", &dollar1);
    scanf("%f", &cent1);
    scanf("%f", &dollar2);
    scanf("%f", &cent2);

    float totalcent = (cent1 + cent2) / 100;

    float total_f = dollar1 + dollar2 + totalcent;
    round(total_f);
    int total_i = total_f;

    int cent_f = (total_f - total_i) * 100 + 1;

    printf("%d\n", total_i);
    printf("%d", cent_f);
}