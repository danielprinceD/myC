#include <stdio.h>
char ch = 176;
float celsius(float temp)
{
    temp = (temp - 32) / 1.8;
    printf("Celsius is %0.2f%cC", temp, ch);
}

float faren(float temp)
{
    temp = (temp * 1.8) + 32;
    printf("Farenheit is %0.2f%cF", temp, ch);
}

int main()
{
    float temp;
    int choice;
    printf("Enter your choice (1(celsius) or 2(Farenheit)) :  ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the temparature in Farenheit : ");
        scanf("%f", &temp);
        celsius(temp);
        break;

    case 2:
        printf("Enter the temparature in Celsius : ");
        scanf("%f", &temp);
        faren(temp);
        break;
    }
}