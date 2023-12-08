#include<stdio.h>
int main()
{
    int num=10,i,j,k;
    
    for(i=0;i<=num;i++)
    {
        for(j=num;j>=i;j--)
        {
            printf(" ");
        }
        printf("1 ");
        if(i>0)
        {
            for(j=0;j<i;j++)
            {
        printf("2 ");

            }
        }
            printf("1");
        
        printf("\n");

    }
}