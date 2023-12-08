#include <stdio.h>
int main(int argc,char **arcv)
{   
    FILE *fptr;
    int i=0;
    fptr = fopen("D:\\MinGW\\bin\\c\\text_file.txt","r");
    if(fptr==NULL)
    {
        printf("Error!");
    }
    printf("File Data : ");
    char name[100];
    fscanf(fptr,"%s",&name);
    
    printf("%s",name);
    
    fclose(fptr);

}