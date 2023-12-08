#include<stdio.h>

int main()
{   
    int num=5,i,j,k;
    int temp= num;
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=num;k>j;k--)
        {
            printf("%d",temp);
        }
        printf("\n");
        temp--;
    }
}