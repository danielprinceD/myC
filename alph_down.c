#include<stdio.h>

int main()
{   
    int num=5,i,j,k;
    int temp= num;
    char ch='A';
    for(i=0;i<num;i++)
    {
        
        for(k=num;k>i;k--)
        {
            printf("%c",ch);
        ch++;
        }
        printf("\n");
        
    }
}