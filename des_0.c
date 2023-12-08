#include <stdio.h>
int main()
{
    int i,j,k;
    int num = 5;
    for(i=0;i<num;i++)
    {
        
        for(k=num;k>i;k--)
        {
            printf("*");
        }
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=num;k>i;k--)
        {
            printf("*");
        }
        printf("\n");


    }

    for(i=1;i<num;i++)
    {
        for(k=0;k<=i;k++)
        {
            printf("*");
        }
        for(j=num;j>i;j--)
        {
            printf(" ");
        }
        for(j=num;j>i+1;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("*");
        }

        printf("\n");
    }
}