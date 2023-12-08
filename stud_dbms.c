#include<stdio.h>
#include<stdlib.h>
struct Student
{
    int roll;
    char name[20];
    char dep[20];
    char course[20];
    int year;
};

void add(struct Student *s,int i)
{
    printf("Enter the Rollnumber :  ");
    scanf("%d",&(s+i)->roll);
    printf("Enter the Student Name :  ");
    scanf("%s",&(s+i)->name);
    printf("Enter the Depatment :  ");
    scanf("%s",&(s+i)->dep);
    printf("Enter the Couse :  ");
    scanf("%s",&(s+i)->course);
    printf("Enter the year of joining:  ");
    scanf("%d",&(s+i)->year);
}

void display(struct Student *s,int i)
{
    printf("%s\t\t",(s+i)->name);
    printf("%d\t",(s+i)->roll);
    printf("%s\t",(s+i)->dep);
    printf("%s\t",(s+i)->course);
    printf("%d\t",(s+i)->year);
}

void year_display(struct Student *s,int i,int y_display)
{
    if((s+i)->year==y_display)
    {
        
    printf("%s\t\t",(s+i)->name);
    printf("%d\t",(s+i)->roll);
    printf("%s\t",(s+i)->dep);
    printf("%s\t",(s+i)->course);
    printf("%d\t",(s+i)->year);
    }
}
void roll_display(struct Student *s,int i,int d_display)
{
    if((s+i)->roll==d_display)
    {
        
    printf("%s\t\t",(s+i)->name);
    printf("%d\t",(s+i)->roll);
    printf("%s\t",(s+i)->dep);
    printf("%s\t",(s+i)->course);
    printf("%d\t",(s+i)->year);
    }
}

int main()
{
    struct Student *s=NULL;
    int num,i;
    printf("Enter a number of students : ");
    scanf("%d",&num);

    s=(struct Student *)malloc(num*sizeof(struct Student));

    for(i=0;i<num;i++)
    {
        add(s,i);
    }
    printf("\nName\t\tRollNo\tDepartment\tCourse\tYear of Join\n");
    for(i=0;i<num;i++)
    {
        display(s,i);
        printf("\n");
    }

    int y_display;
    printf("Enter the year you need : ");
    scanf("%d",&y_display);

    for(i=0;i<num;i++)
    {
        year_display(s,i,y_display);
        printf("\n");
    }
    int d_display;
    printf("Enter the rollnum you need : ");
    scanf("%d",&d_display);
    for(i=0;i<num;i++)
    {
        roll_display(s,i,d_display);
        printf("\n");
    }
    
}