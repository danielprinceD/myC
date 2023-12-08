#include<stdio.h>

int star(int num)
{
    if(num>0)
    {
        
    int i;
    for(i=0;i<num;i++)
    {
        printf("* ");
    }
    
    printf("\n");
    star(num-1);

    }
}

int main()
{
   star(5);
}