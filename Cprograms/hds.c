#include<stdio.h>
#include<string.h>

struct student
{
    char name[25];
    long reg;
    char course[25];
    long mobile;
}s1,s2,s3;


int main()
{

  printf("\n");
  printf("Enter the information about s1:\n");
  scanf("\n");
  scanf("%[^\n]%*c", s1.name);
  scanf("\n");
  scanf("%[^\n]%*c", s1.course);
  scanf("%lu",&s1.mobile);
  scanf("%lu",&s1.reg);

  printf("\n");
  printf("Enter the information about s2: \n");
  scanf("\n");
  scanf("%[^\n]%*c", s2.name);
  scanf("\n");
  scanf("%[^\n]%*c", s2.course);
  scanf("%lu",&s2.mobile);
  scanf("%lu",&s2.reg);

  printf("\n");
  printf("Enter the information about s3: \n");
  scanf("\n");
  scanf("%[^\n]%*c", s3.name);
  scanf("\n");
  scanf("%[^\n]%*c", s3.course);
  scanf("%lu",&s3.mobile);
  scanf("%lu",&s3.reg);

  printf("\n");
  printf("Information about S1 is :\n");
  printf("Name - %s\n",s1.name);
  printf("course name - %s\n",s1.course);
  printf("Mobile numuber- %lu\n",s1.mobile);
  printf("Reg No- %lu\n",s1.reg);

  printf("\n");
  printf("Information about S2 is :\n");
  printf("Name - %s\n",s2.name);
  printf("course name - %s\n",s2.course);
  printf("Mobile numuber- %lu\n",s2.mobile);
  printf("Reg No- %lu\n",s2.reg);

  printf("\n");
  printf("Information about S3 is :\n");
  printf("Name - %s\n",s3.name);
  printf("course name - %s\n",s3.course);
  printf("Mobile numuber- %lu\n",s3.mobile);
  printf("Reg No- %lu\n",s3.reg);
  return 0;
}