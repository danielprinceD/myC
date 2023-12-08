#include<stdio.h>
int main()
{
    int num=5,i,j,k;
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=j;k<num;k++)
        {
            printf("*");
        }
        printf("\n");

    }
}