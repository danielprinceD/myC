#include<stdio.h>

int main()
{   
    int num=5,i,j,k;
    int temp= num;
    char ch='A';
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            printf(" ");
        }
        
        for(k=0;k<=i;k++)
        {
            printf("%c ",ch);
            ch++;
        }
        ch='A' ;
        printf("\n");
        
    }
}