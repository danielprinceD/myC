#include <stdio.h>
#include<stdlib.h>

struct Customer
{
    int accNum;
    char name[20];
    float bal;
};

void add(struct Customer *s,int i)
{
    printf("Enter the Account Number :  ");
    scanf("%d",&(s+i)->accNum);
    printf("Enter the Customer Name :  ");
    scanf("%s",&(s+i)->name);
    printf("Enter the Balance :  ");
    scanf("%f",&(s+i)->bal);
}
void display(struct Customer *s,int i)
{
    printf("%d\t\t",(s+i)->accNum);
    printf("%s\t",(s+i)->name);
    printf("%f\t",(s+i)->bal);

}
void bal_low(struct Customer *s,int i,int bal_display)
{
    if((s+i)->bal<=bal_display)
    {
        
    printf("%d\t\t",(s+i)->accNum);
    printf("%s\t",(s+i)->name);
    printf("%f\t",(s+i)->bal);
    }
}
void withdraw(struct Customer *s,int i,int acc,float amt)
{
    if((s+i)->accNum == acc)
    {
        if((s+i)->bal < amt)
        {
            printf("Your Balance is insufficient !");
        }
        else{
            (s+i)->bal -= amt;
        }
    }
    else
    {
        printf("Enter the valid Account Number !");
    }
}
void deposit(struct Customer *s,int i,int acc,float amt)
{
    if((s+i)->accNum == acc)
    {
        
        (s+i)->bal += amt;

    }else
    {
        printf("Enter the valid Account Number !");
        
    }
}
int main()
{
    int num,i;
    printf("Enter the number of customers : ");
    scanf("%d",&num);

    struct Customer *c;
    c =(struct Customer *)malloc(num*sizeof(struct Customer));
    for(i=0;i<num;i++)
    {
        add(c,i);
    }
    printf("\nAcc Numebr\tCust Name\t Balance\t\n");
    for(i=0;i<num;i++)
    {
        display(c,i);
        printf("\n");
    }
    float bal_display;
    printf("Enter the balance amount to display : ");
    scanf("%f",&bal_display);
    printf("The Amount below %0.2f : \n",bal_display);
    
    printf("\nAcc Numebr\tCust Name\t Balance\t\n");
    for(i=0;i<num;i++)
    {
        bal_low(c,i,bal_display);
        printf("\n");
    }
    int choice;
    do
    {
        int getAcc,w_amt,d_amt;
        printf("Do you want to withdraw(0) or deposit(1) : ");
        scanf("%d",&choice);
        
            printf("Enter the Account number : ");
            scanf("%d",&getAcc);
        if(choice==0)
        {
            printf("Enter the Amount to withdraw : ");
            scanf("%d",&w_amt);
            for(i=0;i<num;i++)
    {
        withdraw(c,i,getAcc,w_amt);
        printf("\n");
    }      
    printf("\nAcc Numebr\tCust Name\t Balance\t\n");
    for(i=0;i<num;i++)
    {
        display(c,i);
        printf("\n");
    }

        }
        else if(choice == 1)
        {
            
            printf("Enter the Amount to deposit : ");
            scanf("%d",&d_amt);
            
        for(i=0;i<num;i++)
        {
        deposit(c,i,getAcc,d_amt);
        printf("\n");
        
        }
        printf("\nAcc Numebr\tCust Name\t Balance\t\n");
        for(i=0;i<num;i++)
        {
        display(c,i);
        printf("\n");
        }
        }
    }while((choice==0 || choice ==1));

    
}