#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    int num=6;
    for(i=0;i<num;i++)
    {
        for(j=num;j>=i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=j;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<num;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(k=num;k>=j;k--)
        {
            printf("*");
        }
        printf("\n");
    }


}