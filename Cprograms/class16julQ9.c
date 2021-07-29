
//9. Program to store information of a student using structure.

#include<stdio.h>
#include<string.h>

struct student{
    char name[25];
    int reg;
    char course[25];
    double mobile;
};
int main()
{
  struct student s1;
  struct student s2;
  struct student s3;

  printf("Enter the information about s1:\n");

  scanf("%c",&s1.name);
  fgets(s1.course,25,stdin);
  scanf("%lf",&s1.mobile);
  scanf("%d",&s1.reg);

  printf("Enter the information about s2: \n");

  fgets(s2.name,25,stdin);
  fgets(s2.course,25,stdin);
  scanf("%lf",&s2.mobile);
  scanf("%d",&s2.reg);

  printf("Enter the information about s3: \n");

  fgets(s3.name,25,stdin);
  fgets(s3.course,25,stdin);
  scanf("%lf",&s3.mobile);
  scanf("%d",&s3.reg);

  printf("Information about S1 is :\n");

  printf("Name - %s\n",s1.name);
  printf("course name - %s\n",s1.course);
  printf("Mobile numuber- %lf\n",s1.mobile);
  printf("Reg No- %d\n",s1.reg);

  printf("Information about S2 is :\n");

  printf("Name - %s\n",s2.name);
  printf("course name - %s\n",s2.course);
  printf("Mobile numuber- %lf\n",s2.mobile);
  printf("Reg No- %d\n",s2.reg);

  printf("Information about S3 is :\n");

  printf("Name - %s\n",s3.name);
  printf("course name - %s\n",s3.course);
  printf("Mobile numuber- %lf\n",s3.mobile);
  printf("Reg No- %d\n",s3.reg);

  return 0;
}

