#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int count = 0;
struct Book
{
    char bkname[20];
    char author[20];
    int year;
} *bk;
void removeBook(int i)
{
    *(bk + (i - 1))->bkname = 0;
    *(bk + (i - 1))->author = 0;
    (bk + (i - 1))->year = 0;
}
void addBook(int i)
{
    printf("Enter Book name : ");
    scanf("%s", (bk + i)->bkname);
    printf("Enter Book Author : ");
    scanf("%s", (bk + i)->author);
    printf("Enter Book published year : ");
    scanf("%d", &(bk + i)->year);
}
void displayBook(int i)
{
    printf("%d\t%s\t\t%s\t\t%d\n", i + 1, (bk + i)->bkname, (bk + i)->author, (bk + i)->year);
}

void choiceMaker(int ch)
{
    int i, j, no_bk, sno;
    switch (ch)
    {
    case 1:
        printf("Enter the number of book : ");
        scanf("%d", &no_bk);
        no_bk += count;
        for (i = count; i < no_bk; ++i)
        {
            addBook(i);
            count++;
        }
        break;
    case 2:
        printf("\nS.no\tName\t\tAuthor\t\tYear\n");
        int i;
        for (i = 0; i < count; i++)
        {
            displayBook(i);
        }
        break;
    case 3:
        printf("Enter the s.no to remove book : ");
        scanf("%d", &sno);
        removeBook(sno);
        break;
    }
}
int main()
{
    int ch;
    bk = (struct Book *)malloc(1000 * sizeof(struct Book));
    do
    {
        printf("1.Add Book\n");
        printf("2.Display Book\n");
        printf("3.Remove Book\n");
        printf("4.Exit\n");
        printf("Enter your Choice : ");
        scanf("%d", &ch);
        choiceMaker(ch);

    } while (ch <= 4);
}