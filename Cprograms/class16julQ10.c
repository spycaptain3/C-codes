//10. Program to declare, initialize an union, example of union.
#include<stdio.h>
#include<string.h>
union student_lead
{
    char name[35];
    int roll;
    float hight;
}s1,s2,s3;
int main()
{
    printf("Enter the name of the lead 1: \n");
    fgets(s1.name,sizeof(s1.name),stdin);

    printf("Enter the roll number of lead 2:\n");
    scanf("%d",&s2.roll);

    printf("Enter the hight of the lead 3:\n");
    scanf("%f",&s3.hight);

    printf("Name of lead 1 is %s\n",s1.name);
    printf("hight of the lead 3 is %f\n",s3.hight);
    printf("roll of the lead 2 is %d\n",s2.roll);

    return 0;
}
