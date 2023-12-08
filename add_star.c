#include<stdio.h>
int main()
{
    int num=7,i,j,k;
    for(i=1;i<=num*2-1;i++)
    {
        for(j=num*2-1;j>=i;j--)
        {
            printf(" ");
        }

        for(k=0;k<i;k++)
        {
            printf("* ");
            
        }
    i++;
        printf("\n");
        

    
    }
}