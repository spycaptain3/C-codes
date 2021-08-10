/*Write a C program to write all the members of an array of structures to a file using
fwrite(). Read the array from the file and display on the screen.*/
#include<stdio.h>
#include<string.h>
struct student
{
   char name[50];
   int class;
}st1[3], st2[3];   
int main(){
     
    FILE *fptr;
    int i;

    fptr = fopen("file.txt","wb");
    for(i = 0; i < 3; ++i)
    {
        fflush(stdin);
        printf("Enter name: ");
        gets(st1[i].name);

        printf("Enter class: "); 
        scanf("%d", &st1[i].class); 
    }

    fwrite(st1, sizeof(st1), 1, fptr);
    fclose(fptr);

    fptr = fopen("file.txt", "rb");
    fread(st2, sizeof(st2), 1, fptr);
    for(i = 0; i < 3; ++i)
    {
        printf("Name: %s\nclass: %d", st2[i].name, st2[i].class);
    }
    fclose(fptr);
}