#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0;
struct Student
{
    char name[30];
    char rollno[20];
    int age;
    int phoneno;
};
struct Student *ptr;

void add_stud(struct Student *ptr, int num)
{
    printf("\nEnter Student Name : ");
    scanf("%s", &(ptr + num)->name);
    printf("\nEnter Student Rollnum : ");
    scanf("%s", &(ptr + num)->rollno);
    printf("\nEnter Student Age : ");
    scanf("%d", &(ptr + num)->age);
    printf("\nEnter Student Phone number  : ");
    scanf("%d", &(ptr + num)->phoneno);
}

void display(struct Student *ptr, int num)
{
    printf("%d\t\t", num + 1);
    printf("%s\t\t", (ptr + num)->name);
    printf("%s\t\t", (ptr + num)->rollno);
    printf("%d\t\t", (ptr + num)->age);
    printf("%d\t\t", (ptr + num)->phoneno);
}

void delete(struct Student *ptr, char num[])
{
    if (ptr->rollno == num)
    {
    }
}

int main()
{
    int choice, no_stud, i = 0, d_stud, del;
    ptr = (struct Student *)malloc(1000 * sizeof(struct Student));

    do
    {
        printf("1.Add Student Details\n");
        printf("2.Display all student Details\n");
        printf("3.Delete Student Detail\n");
        printf("4.Exit\n\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number of students : ");
            scanf("%d", &no_stud);

            printf("Enter Student Details : \n");
            no_stud += count;
            for (i = count; i < no_stud; i++)
            {
                add_stud(ptr, i);
                count++;
            }

            break;
        case 2:
            printf("\ns.no\tName\t\tRollno\t\tAge\t\tPhone number\n");
            for (i = 0; i < count; i++)
            {
                display(ptr, i);
                printf("\n");
            }
            break;
        case 3:
            printf("Enter the rollnumber of a student to delete the details  : ");
            char get_roll[10];
            scanf("%s", get_roll);
            for (i = 0; i < count; i++)
            {
                delete (ptr + i, get_roll);
            }
        case 4:
            printf("Thank you....!");
        }
    } while (choice < 4);
}