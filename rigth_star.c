#include<stdio.h>
int main()
{

    int i,num=5,j,k;
    for(i=1;i<=num;i++)
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

}