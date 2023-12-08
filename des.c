#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    int num=7;
    
    
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=num;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}