#include <stdio.h>
int main()
{
    float cash, amount;
    int month;
    scanf("%f %d", &cash, &month);

    switch (month)
    {
    case 1:
        amount = cash - (cash * 20) / 100;
        printf("Chris father needs to pay Rs.%0.2f", amount);
        break;
    case 3:
    case 5:
        amount = cash - (cash * 10) / 100;
        printf("Chris father needs to pay Rs.%0.2f", amount);
        break;
    case 6:
    case 7:
        amount = cash - (cash * 75) / 100;
        printf("Chris father needs to pay Rs.%0.2f", amount);
        break;
    case 10:
    case 11:
        amount = cash - (cash * 30) / 100;
        printf("Chris father needs to pay Rs.%0.2f", amount);
        break;
    case 12:
        amount = cash - (cash * 35) / 100;
        printf("Chris father needs to pay Rs.%0.2f", amount);
        break;

    default:
        printf("Invalid Month");
    }
}