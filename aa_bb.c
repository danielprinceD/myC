#include<stdio.h>
int main()
{
    int num=5,i,j,k,m;
    char ch='A',b='A';
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            printf(" ");
        }
        
        for(k=0;k<=i;k++)
        {
            printf("%c",ch);
            
        }
        for(m=1;m<i+1;m++)
        {
            printf("%c",b);
        }
        if(i>0)
        {
        printf("%c",b);

        }
        b++;
        printf("\n");
        
    }
}