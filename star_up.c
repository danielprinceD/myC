#include<stdio.h>
int main()
{
    int num=4,i,j,k;
    for(i=0;i<num;i++)
    {
        for(j=num;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=j;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}